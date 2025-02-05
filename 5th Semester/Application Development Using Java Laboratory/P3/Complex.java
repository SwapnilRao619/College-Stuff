// 3. Write a Java program using encapsulation and constructors to create a class to represent a complex number and perform the following operations:
// a. Addition of two complex numbers.
// b. Subtraction of two complex numbers.
// c. Compare two complex numbers.

class Complex{
    private double r,i;
    Complex(double r,double i){
        this.r=r;
        this.i=i;
    }
    Complex add(Complex c){
        return new Complex(r+c.r,i+c.i);
    }
    Complex sub(Complex c){
        return new Complex(r-c.r,i-c.i);
    }
    boolean comp(Complex c){
        return (r==c.r && i==c.i);
    }
    public static void main(String[] args){
        Complex n1=new Complex(2,3); Complex n2=new Complex(1,1);
        Complex s=n1.add(n2); Complex d=n1.sub(n2);
        System.out.println("Sum: "+s.r+"+"+s.i);
        System.out.println("Difference: "+d.r+"+"+d.i);
        System.out.println("Equal or not: "+n1.comp(n2));
    }
}