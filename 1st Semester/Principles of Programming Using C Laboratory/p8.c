#include<stdio.h>
void main()
{
    int score;
    int grade;
    printf("Enter your score: ");
    scanf("%d",&score);
    grade = score/10;
    if(score>100)
        printf("How is that possible?");
    else
        switch(grade)
        {
            case 10 :printf("Your grade is A.");
                      break;
            case 9  :printf("Your grade is A.");
                      break;
            case 8 : printf("Your grade is B.");
                      break;
            case 7 : printf("Your grade is C.");
                      break;
            case 6 : printf("Your grade is D.");
                      break;
            case 5 : printf("Your grade is E.");
                      break;
            default: printf("You failed, F grade.");
        }
}