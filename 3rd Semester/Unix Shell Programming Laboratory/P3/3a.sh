#! /bin/bash

for i in $*
do
	if [ -d $i ]
	then
		echo "Large filesize is: "
		echo `ls -lR $1 | grep "^-" | tr -s ' ' | cut -d ' ' -f 5 | sort -n | tail -1`
	else 
		"Not a directory"
	fi
done
