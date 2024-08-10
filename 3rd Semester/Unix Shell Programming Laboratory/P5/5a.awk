{ split ( $0, arr, "-" )
	if ((arr[1]<1) || (arr[1]>31) || (arr[2]<1) || (arr[2]>12))
	{
		print "Invalid date"
		exit 1
	}
	else{
		if (arr[2]==1)
			print "Jan"
		if (arr[2]==2)
                	print "Feb"
		if (arr[2]==3)
                	print "March"
	        if (arr[2]==4)
                	print "April"
	        if (arr[2]==5)
                        print "May"
		if (arr[2]==6)
                        print "June"
		if (arr[2]==7)
                        print "Jul"
		if (arr[2]==8)
                        print "Aug"
		if (arr[2]==9)
                        print "Sep"
		if (arr[2]==10)
                        print "Oct"
		if (arr[2]==11)
                        print "Nov"
		if (arr[2]==12)
                        print "Dec"
		print arr[1]
		print arr[3]
}
}
