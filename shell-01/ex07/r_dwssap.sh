#!/bin/sh

cat /etc/passwd | grep -v "#" | sed "1!n;d" | cut -d ":" -f1 | rev | sort -r | sed "$FT_LINE1, $FT_LINE2!d" | tr "\n" "," | sed "s/,/, /g" | sed "s/, $/.$/g" | tr -d "\n"
