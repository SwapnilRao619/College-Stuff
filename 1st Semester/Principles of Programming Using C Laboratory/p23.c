#include<stdio.h>
void main()
{
    char s1[100],s2[100];
    int i,j,l1=0,l2=0;
    int temp = 0;
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
    if(l1>l2)
        printf("String 1 is longer than String 2 by %d",l1-l2);
    else if(l1<l2)
        printf("String 2 is longer than String 1 by %d",l2-l1);
    else
    {
        printf("String 1 and String 2 are equal in size, ");
        for(i=0;i<l1;i++)
        {
            if(s1[i]==s2[i])
                temp = 1;
            else
                temp = -1;
        }
        if(temp == 1)
            printf("and equal in content too.");
        else
            printf("but not equal in content.");
    }
}