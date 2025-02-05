// Write a java program to read two positive integers and perform the division operation on them and display the result if a user enters a positive integer and non-zero denominator. 
// Else, If the input is negative or the denominator is zero, generate negative number input and divide by zero exception to handle the scenario.

import java.util.*;
class P8{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        try{
            System.out.println("Enter two numbers: ");
            int n=sc.nextInt(); int d=sc.nextInt();
            if(n<0||d<0){
                throw new IllegalArgumentException("Negative numbers not allowed.");
            }
            System.out.println("Answer: "+(n/d));
        } catch (ArithmeticException e){
            System.out.println("Cannot divide by zero.");
        } catch (IllegalArgumentException e){
            System.out.println("Error: "+e.getMessage());
        } finally {
            sc.close();
        }
    }
}