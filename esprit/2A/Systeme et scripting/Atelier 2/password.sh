#!/bin/bash

# Global vars
WORDS_LIST="words.txt"
HELP_FILE="help.txt"

show_usage() {
  echo "Usage: $0 [-h] [-v] [-t] <password>"
}

HELP() {
  if [[ -f $HELP_FILE ]]; then
    cat $HELP_FILE
  else
    echo "Error: Help file ($HELP_FILE) not found."
  fi
}

show_version() {
  echo "password.sh version 1.0 - Auteur: @ZouariOmar"
}

check_dictionary() {
  local password="$1"

  if [[ ! -f "$WORDS_LIST" ]]; then
    echo "Error: $WORDS_LIST not founded!"
    return 1
  fi

  for ((i = 0; i <= ${#password} - 4; i++)); do
    substring="${password:i:4}"
    if grep -q -F "$substring" "$WORDS_LIST"; then
      echo "Error: Password have 4 consecutive chars ($substring) in $WORDS_LIST!"
      return 1
    fi
  done

  return 0
}

check_password() {
  local password="$1"

  if [[ ${#password} -lt 8 ]]; then
    echo "Error: Password must have 8 chars at less!"
    return 1
  fi

  if ! [[ "$password" =~ [0-9] ]]; then
    echo "Error: Password must have 1 number at less!"
    return 1
  fi

  if ! [[ "$password" =~ [@#$%\&*\+\-=] ]]; then
    echo "Error: Password must have 1 special char at less! (@, #, $, %, &, *, +, -, =)"
    return 1
  fi

  if ! check_dictionary "$password"; then
    return 1
  fi

  echo "Validate Password!"
}

while getopts "hvt" opt; do
  case $opt in
  h)
    HELP
    ;;
  v)
    show_version
    ;;
  t) test_mode=1 ;;
  *)
    show_usage
    exit 1
    ;;
  esac
done
shift $((OPTIND - 1))

if [[ $test_mode -eq 1 ]]; then
  if [[ -z "$1" ]]; then
    echo "Error: Empty passed password!"
    show_usage
    exit 1
  fi
  check_password "$1"
  exit $?
fi

show_usage
exit 1
