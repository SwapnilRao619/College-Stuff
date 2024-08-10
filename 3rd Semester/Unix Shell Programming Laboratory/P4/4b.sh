#! /bin/bash

echo "Enter string: "
read string

words=$(echo -n "$string" | wc -w)
chars=$(echo -n "$string" | wc -c)
space=$(expr length "$string" - length `echo "$string" | sed 's/ //g'`)
spcsymbols=$(echo $string | grep -o [^A-Za-z0-9_[:space:]] | wc -l)

echo "The number of words: $words"
echo "The number of characters: $chars"
echo "The number of spaces: $space"
echo "The number of special symbols: $spcsymbols"
