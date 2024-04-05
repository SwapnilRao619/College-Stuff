#! /bin/bash

filename="finaltest.txt"
if [ -e $filename ]
then
	echo "File found, moving contents from finaltest.txt to finaltest.txt_old"
	mv $filename $filename"_old"
	touch $filename
else
	echo "File does not exist, creating empty file..."
	touch $filename
fi
