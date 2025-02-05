// 2. Write a java program to create an Employee database which stores following information about the Employee: Name, Emp_id, department, age, and designation. Perform the following operations:
// a. Read and display the details of at least five Employees.
// b. Calculate and display the sum of salary of all the employees of “sales” department.
// c. Retrieve the details of “highest paid manager” in the purchase department.

import java.util.*;
public class E{
    String n,d,g,i; int a; double s;
    void get(Scanner c){
        n=c.nextLine(); i=c.nextLine(); d=c.nextLine(); g=c.nextLine();
        a=c.nextInt(); s=c.nextDouble(); c.nextLine();
    }
    void put(){
        System.out.printf("%s\t%s\t%s\t%d\t%s\t%.2f\n",n,i,d,a,g,s);
    }
    public static void main(String[] args){
        Scanner c=new Scanner(System.in);
        E[] e=new E[c.nextInt()];c.nextLine();
        for(int i=0;i<e.length;i++){
            e[i]=new E();
            System.out.println("Enter information about Employee "+(i+1)+": ");
            e[i].get(c);
        }
        double t=0,m=0; 
        E h=null;
        for(E x:e){
            x.put();
            if(x.d.equalsIgnoreCase("sales"))t+=x.s;
            if(x.d.equalsIgnoreCase("purchase")&&x.g.equalsIgnoreCase("manager")&&x.s>m){
                m=x.s;
                h=x;
            }
        }
        System.out.printf("\nSales Total: %.2f\nTop Manager: %s",t,h!=null?"\n":"None\n");
        if(h!=null)h.put();
    }
}