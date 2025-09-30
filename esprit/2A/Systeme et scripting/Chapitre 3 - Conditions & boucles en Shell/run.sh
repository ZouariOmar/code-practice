#!/bin/bash

echo "Bonjour, test du $(date)"
echo "Total arg est $#"

if [ $# -ne 4 ]; then
  echo -e "\033[0;31mError: Expect 4 args\033[0m"
  echo -e "\033[0;34mUsage: $0 <arg1> <ag2> <ag3> <ag4>\033[0m"
  exit 1
fi

for file in $@; do
  if [ -d $file ]; then
    echo "$file est  un  répertoire"
    mkdir -p tmp
    touch tmp/contenu
    ls $file > tmp/contenu
  elif [ -f $file ]; then
    echo "$file est  un  fichier"
    line_count=$(wc -l < "$file")
    if [ $line_count -eq 0 ]; then
      echo "Le fichier est vide."
    elif [ $line_count -gt 20 ]; then
      head "$file"
    else
      cat "$file"
    fi
  else
    echo "$file est de type autre"
  fi
done
