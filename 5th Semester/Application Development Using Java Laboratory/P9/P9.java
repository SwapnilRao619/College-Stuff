// Write a java program to define an interface compute with an abstract method convert, define two classes which implements the compute interface and extend the convert method to convert giga bytes to bytes and Euro to rupees. 
// Declare objects for both the classes and demonstrate the conversion from giga bytes to bytes and euro to rupees.

interface Compute{
    double convert(double v);
}
class GB2B implements Compute{
    public double convert(double gb){
        return gb*1073741824;
    }
}
class E2R implements Compute{
    public double convert(double e){
        return e*90.85;
    }
}
public class P9{
    public static void main(String[] args){
        Compute fc=new GB2B();
        Compute sc=new E2R();
        System.out.println("Conversions:\n"+"2 GB = "+fc.convert(2)+" Bytes."+"\n50 Euros = "+sc.convert(50)+" Rupees.");
    }
}