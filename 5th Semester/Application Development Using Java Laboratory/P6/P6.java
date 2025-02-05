// Write a Java program to define a base class bank, which holds various details of customers such as name, account number, balance and member functions to read, display and an abstract method to calculate rate of interest earned by all the account holders. 
// Derive three classes namely City-Bank,SBI-bank, Canara-bank from this base class, which are offering different rate of interests. 
// Extend the calculate method of base class with in these derived classes to calculate and display the interest earned by all the account holders of these banks.

abstract class Bank{
    String n; int a; double b;
    Bank(String n, int a, double b){
        this.n=n; this.a=a; this.b=b;
    }
    void display(){
        System.out.printf("\nName: %s\tAccount: %d\tBalance: %.2f\tInterest: %.2f\t",n,a,b,calcInt());
    }
    abstract double calcInt();
}
class CityBank extends Bank{
    CityBank(String n, int a, double b){
        super(n,a,b);
    }
    double calcInt(){ return b*0.6; }
}
class SBIBank extends Bank{
    SBIBank(String n, int a, double b){
        super(n,a,b);
    }
    double calcInt(){ return b*0.7; }
}
class CanaraBank extends Bank{
    CanaraBank(String n, int a, double b){
        super(n,a,b);
    }
    double calcInt(){ return b*0.65; }
}
public class P6{
    public static void main(String[] args){
        Bank[] b={ 
            new CityBank("John", 101, 50000),
            new SBIBank("Jane", 102, 75000),
            new CanaraBank("Mike", 103, 60000)
        };
        for(Bank x:b){
            x.display();
        }
    }
}