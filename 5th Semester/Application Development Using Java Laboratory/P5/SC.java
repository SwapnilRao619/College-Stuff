//Write a java program using compile time polymorphism (method overloading) to compare two strings. 
// The program should implement two different versions of strcmp the first version of usrstrcmp () that compares two string the second version should compare only specified number of characters from first string with second string and display the results.

class SC{
    static boolean usrstrcmp(String s1, String s2){
        if(s1.length()!=s2.length())
            return false;
        for(int i=0;i<s1.length();i++)
            if(s1.charAt(i)!=s2.charAt(i))
                return false;
        return true;
    }
    static boolean usrstrcmp(String s1, String s2, int n){
        int l1=Math.min(n,s1.length()); int l2=Math.min(n,s2.length());
        if(l1!=l2)
            return false;
        for(int i=0;i<l1;i++)
            if(s1.charAt(i)!=s2.charAt(i))
                return false;
        return true;
    }
    public static void main(String[] args){
        String s1="Hello"; String s2="Help";
        System.out.println("Function for the whole word: "+usrstrcmp(s1,s2));
        System.out.println("Function for the first n characters: "+usrstrcmp(s1,s2,3));
    }
}