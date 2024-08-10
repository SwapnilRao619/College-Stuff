#! /bin/bash

threshold=80

for path in `/bin/df -h | grep -vE 'Filesystem|tmpfs' | awk '{print $5}' | sed 's/%//g'`

do
	echo "$path"
	if [ $path -ge $threshold ]
	then
		df -h | grep $path% >> t.txt
		find . -type f -size +500M > w.txt
	fi 
done 
value=`cat w.txt | wc -l`
if [ $value -ge 1 ] 
then
       echo "Yes, directory contains file size more than 500M or near to 1GB" 
fi       

