package weather;

import java.io.*;
import java.util.*;
import org.apache.hadoop.io.*;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.mapred.*;

public class reducer extends MapReduceBase implements Reducer<Text, DoubleWritable, Text, DoubleWritable>{
    public void reduce(Text key, Iterator<DoubleWritable> value, OutputCollector<Text, DoubleWritable> output, Reporter r) throws IOException{
        Double max=-9999.0, min=9999.0;
        while(value.hasNext()){
            Double temp=value.next().get();
            max=Math.max(temp,max);
            min=Math.min(temp,min);
        }
        output.collect(new Text("Max temp in "+key+" :"), new DoubleWritable(max));
        output.collect(new Text("Min temp in "+key+" :"), new DoubleWritable(min));
    }
}