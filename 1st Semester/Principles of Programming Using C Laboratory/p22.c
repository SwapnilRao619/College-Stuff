#include<stdio.h>
void main()
{
    int i=0,j=0,l1=0,l2=0;
    char s1[100],s2[100];
    printf("Enter string 1: ");
    gets(s1);
    printf("Enter string 2: ");
    gets(s2);
    while(s1[i] != '\0')
    {
        l1++;
        i++;
    }
    while(s2[j] != '\0')
    {
        l2++;
        j++;
    }
    for(i=0;i<=l2;i++)
    {
        s1[l1+i]=s2[i];
    }
    printf("The concatenated string is: %s",s1);
}