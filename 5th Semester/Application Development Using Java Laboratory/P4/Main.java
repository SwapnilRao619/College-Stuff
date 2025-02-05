// Write a java program to define a base class called person which stores information about a person such as name, age, gender. 
// Derive two new classes employee and student and extend the base class methods in derived class to read and display the details that are specific to student and employee.
// Display the details of at least five students and five employees.

import java.util.*;
class Person{
    String n,g; int a;
    Person(String n, String g, int a){
        this.n=n; this.g=g; this.a=a;
    }
    void display(){
        System.out.println("\nName: "+n+"\nGender: "+g+"\nAge: "+a);
    }
}
class Employee extends Person{
    String c; double s;
    Employee(String n, String g, int a, String c, double s){
        super(n,g,a);
        this.c=c; this.s=s;
    }
    void display(){
        super.display();
        System.out.println("Company: "+c+"\nSalary: "+s);
    }
}
class Student extends Person{
    String sc; double gr;
    Student(String n, String g, int a,String sc, double gr){
        super(n,g,a);
        this.sc=sc; this.gr=gr;
    }
    void display(){
        super.display();
        System.out.println("School: "+sc+"\nGrade: "+gr);
    }
}
public class Main{
    public static void main(String[] args){
        Scanner sca=new Scanner(System.in);
        Employee[] e=new Employee[5];
        Student[] st=new Student[5];
        System.out.println("\nEnter details of 5 employees: ");
        for(int i=0;i<5;i++){
            System.out.print("Name: ");
            String n = sca.nextLine();
            System.out.print("Age: ");
            int a = sca.nextInt();
            System.out.print("Gender: ");
            String g = sca.next();
            System.out.print("Company: ");
            String c = sca.next();
            System.out.print("Salary: ");
            double s = sca.nextDouble();
            sca.nextLine();
            e[i]=new Employee(n,g,a,c,s);
        }
        System.out.println("\nEnter details of 5 students: ");
        for(int i=0;i<5;i++){
            System.out.print("Name: ");
            String n = sca.nextLine();
            System.out.print("Age: ");
            int a = sca.nextInt();
            System.out.print("Gender: ");
            String g = sca.next();
            System.out.print("School: ");
            String sc = sca.next();
            System.out.print("Grade: ");
            double gr = sca.nextDouble();
            sca.nextLine();
            st[i]=new Student(n,g,a,sc,gr);
        }
        System.out.println("\nEmployee Details:");
        for(Employee x:e){
            x.display();
            System.out.println();
        }
        System.out.println("\nStudent Details:");
        for(Student y:st){
            y.display();
            System.out.println();
        }
    }
}