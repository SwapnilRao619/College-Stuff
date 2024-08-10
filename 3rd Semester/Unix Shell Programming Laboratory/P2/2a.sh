#! /bin/bash

echo "Creating 10 folders with 10 files under each directory..."
i=1
while [ $i -le 10 ]
do
	mkdir MSRITDept$i
	cd MSRITDept$i
	j=1
	while [ $j -le 10 ]
	do
		touch MSRITStudentDetails$j
		j=$(($j+1))
	done
	cd ..
	i=$(($i+1))
done
