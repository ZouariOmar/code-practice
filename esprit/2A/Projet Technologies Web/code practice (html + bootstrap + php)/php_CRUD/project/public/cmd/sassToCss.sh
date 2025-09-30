# @file      sassToCss.sh
# @ZouariOmar (zouariomar20@gmail.com)
# @copyright Copyright (c) 2024
#!/bin/bash

# Ensure the script receives exactly 1 arg
if [ "$#" -ne 1 ]; then
  echo "Usage: $0 input_filename output_filename"
  exit 1
fi

#* Compile sass to css in watch mode
sass --watch ../sass/$1.sass:../css/$1.css

# Compile Sass to CSS
#sass --style expanded "../project/sass/$1" > "../project/css/$2"
