#include<stdio.h>
#include<string.h>
void main()
{
    char s1[100];
    char s2[100];
    char s3[100];
    int n,r;
    printf("Enter the first string: ");
    gets(s1);
    printf("Enter the second string: ");
    gets(s2);
    
    //Demonstrating strcpy()
    strcpy(s3,s1);
    printf("After copying s1 to s3: %s", s3);
    //Demonstrating strlen()
    n = strlen(s1);
    printf("\nLength of s1 is: %d",n);
    //Demonstrating strcmp()
    r = strcmp(s2,s1);
    if(r==0)
        printf("\ns1 and s2 are equally long.");
    else if(r<0)
        printf("\ns1 is smaller than s2.");
    else
        printf("\ns1 is larger than s2.");
    //Demonstrating strcat()
    strcat(s1,s2);
    printf("\ns1 after concatenating with s2 is: %s",s1);
}