#! /bin/bash

filename="ne.txt"
if [ ! -e $filename ]
then
	echo "File does not exist, creating new file..."
	touch $filename
fi
