package employee;

import java.io.*;
import java.util.*;
import org.apache.hadoop.mapred.*;
import org.apache.hadoop.io.*;
import org.apache.hadoop.fs.Path;

public class reducer extends MapReduceBase implements Reducer<Text, DoubleWritable, Text, DoubleWritable>{
    public void reduce(Text key, Iterator<DoubleWritable> value, OutputCollector<Text, DoubleWritable> output, Reporter r) throws IOException{
        Double sum=0.0;
        int count=0;
        while(value.hasNext()){
            sum+=value.next().get();
            count++;
        }
        output.collect(new Text("Average salary for "+key+" is: "), new DoubleWritable(sum/count));
        output.collect(new Text("Count of "+key+" is: "), new DoubleWritable(count));
    }
}