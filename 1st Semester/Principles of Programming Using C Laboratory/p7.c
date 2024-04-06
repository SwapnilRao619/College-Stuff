#include<stdio.h>
#include<ctype.h>
void main()
{
    char test;
    printf("Enter the character to be examined: ");
    scanf("%c",&test);
    if(isdigit(test))
        printf("Character is a digit.");
    else if(isalpha(test))
        printf("Character is a alphabet. ");
    else if(ispunct(test))
        printf("Character is a punctuation. ");
    else if(isspace(test))
        printf("Character is a white space. ");
}