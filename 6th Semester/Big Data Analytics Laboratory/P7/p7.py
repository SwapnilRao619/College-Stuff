import sys; from pyspark import SparkContext; sc=SparkContext();
if(len(sys.argv)!=3): print("Enter the input and/or output path!"); sys.exit(0);
(sc.textFile(sys.argv[1])
    .map(lambda x:(int(x[15:19]),int(x[87:92])))
    .reduceByKey(max)
    .saveAsTextFile(sys.argv[2]))