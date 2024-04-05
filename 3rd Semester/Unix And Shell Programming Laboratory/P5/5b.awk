BEGIN{
	print "Removing duplicated lines..."
}
{
	line[++no]=$0
}
END {
	for (i=1;i<=no;i++){
		flag=1
		for (j=1;j<i;j++)
			if (line[i]==line[j])
			flag=0
		if (flag==1)
			print line[i]>>"out.txt"
	}
}
