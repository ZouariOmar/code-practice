#!/bin/bash

if [ "$#" -ne 1 ]; then
  echo "Usage: $0 <directory>"
  exit 1
fi

DIR="$1"
while [ ! -d "$DIR" ]; do
  read -p "Directory not exist! pls try again..." DIR
done

# Init vars
TEXT_DIR="$DIR/Textes"
IMAGE_DIR="$DIR/Images"
VIDEO_DIR="$DIR/Videos"
TEXT_CNT=0
IMAGE_CNT=0
VIDEO_CNT=0

# Create dirs if they are not exist
mkdir -p "$TEXT_DIR" "$IMAGE_DIR" "$VIDEO_DIR"

for file in "$DIR"/*; do
  if [[ -f "$file" ]]; then
    case "${file##*.}" in
    txt | md | csv | log)
      mv "$file" "$TEXT_DIR/"
      ((TEXT_CNT++))
      continue
      ;;
    jpg | jpeg | png | gif | bmp)
      mv "$file" "$IMAGE_DIR/"
      ((IMAGE_CNT++))
      continue
      ;;
    mp4 | avi | mkv | mov)
      mv "$file" "$VIDEO_DIR/"
      ((VIDEO_CNT++))
      continue
      ;;
    *) continue ;;
    esac
  fi
done

touch rapport_tri.txt && {
  echo "Le nombre total de fichiers traitées...$((VIDEO_CNT + TEXT_CNT + IMAGE_CNT))" >rapport_tri.txt
  echo "Number of Text files.....$TEXT_CNT" >>rapport_tri.txt
  echo "Number of images files...$IMAGE_CNT" >>rapport_tri.txt
  echo "Number of video files....$VIDEO_CNT" >>rapport_tri.txt
  echo $(date) >>rapport_tri.txt
}
