// 1. Write a java program:
// a. To calculate and display the roots of Quadratic Equation.
// b. To multiply two arrays and display the result.
// c. To sort the elements in ascending and descending order using bubble sort algorithm.

import java.util.*;
public class P1{
    public static void main(String[] args){
        // x^2-3x+2=0
        double p=-3,q=2;
        double d=p*p-4*q;
        System.out.println("Roots: "+(-p+Math.sqrt(d))/2+", "+(-p-Math.sqrt(d))/2);
        
        // MM
        int[] x={1,2,3},y={4,5,6},z=new int[3];
        for(int i=0;i<3;i++)
            z[i]=x[i]*y[i];
        System.out.println("Product: "+Arrays.toString(z));
        
        //BS(A)
        int[] arr1={3,2,5,4,9};
        for(int i=0;i<arr1.length-1;i++)
            for(int j=0;j<arr1.length-1-i;j++)
                if(arr1[j]>arr1[j+1]){
                    int temp=arr1[j];
                    arr1[j]=arr1[j+1];
                    arr1[j+1]=temp;
                }
        System.out.println("Sorted (A): "+Arrays.toString(arr1));
        
        //BS(D)
        int[] arr2={3,2,5,4,9};
        for(int i=0;i<arr2.length-1;i++)
            for(int j=0;j<arr2.length-1-i;j++)
                if(arr2[j]<arr2[j+1]){
                    int temp=arr2[j];
                    arr2[j]=arr2[j+1];
                    arr2[j+1]=temp;
                }
        System.out.println("Sorted (A): "+Arrays.toString(arr2));
    }
}