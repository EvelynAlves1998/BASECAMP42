#!/bin/sh
cat /etc/passwd | grep -v "#" | cut -d: -f1| sed '1~2d' | rev | sort -r | sed -n "$FT_LINE1,$FT_LINE2 p" | tr '\n' ',' | sed 's/,/, /g' | sed 's/, $/./'