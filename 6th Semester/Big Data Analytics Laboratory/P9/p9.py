import sys; from pyspark import SparkContext; sc=SparkContext();
if(len(sys.argv)!=3): print("Enter input and/or output path!"); sys.exit(0);
(sc.textFile(sys.argv[1])
    .map(lambda x:(x.split('\t')[3],float(x.split('\t')[8])))
    .reduceByKey(lambda a,b:a+b)
    .saveAsTextFile(sys.argv[2]))