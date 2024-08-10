#! /bin/bash

filename="rit.txt"
if [ -e $filename ]
then
	echo "File found, moving contents from rit.txt to rit.txt_old"
	mv $filename $filename"_old"
	touch $filename
fi
