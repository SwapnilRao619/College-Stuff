package oddeven;

import java.io.*;
import java.util.*;
import org.apache.hadoop.io.*;
import org.apache.hadoop.mapred.*;
import org.apache.hadoop.fs.Path;

public class mapper extends MapReduceBase implements Mapper<LongWritable, Text, Text, IntWritable>{
    public void map(LongWritable key, Text value, OutputCollector<Text, IntWritable> output, Reporter r) throws IOException{
        String line[]=value.toString().split(" ");
        for(String a:line){
            int b=Integer.parseInt(a);
            if(b%2==0){
                output.collect(new Text("Even: "), new IntWritable(b));
            }
            else{
                output.collect(new Text("Odd: "), new IntWritable(b));
            }
        }
    }
}