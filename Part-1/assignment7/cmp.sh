echo "hai `whoami`"
date

echo "Enter the file name"
read nam
name=$nam".c"
gcc -lm -o $nam $name fun.c
gcc -c fun.c
gcc -c $name
./$nam

