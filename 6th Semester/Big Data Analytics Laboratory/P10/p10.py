import sys; from pyspark import SparkContext; sc=SparkContext();
if(len(sys.argv)!=3): print("Enter input and/or output path!"); sys.exit(0);
(sc.parallelize(
    sc.textFile(sys.argv[1])
    .map(lambda x:(x.split(',')[7],1))
    .countByKey()
    .items())
    .saveAsTextFile(sys.argv[2]))