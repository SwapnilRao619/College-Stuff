#! /bin/bash

if [ $# -eq 0 ]
then
	echo "File does not exist"
else
	ls -l $1 > t1
	x=`cut -d ' ' -f 1,6,7,8,9 t1`
	echo $x
fi
