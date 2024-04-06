#include <stdio.h>
struct student {
    char name[50];
    int marks[3];
};

void main() 
{
    struct student s[3];
    int i, j;
    int sumsuw1, sumsuw2, sumsuw3, sumstw;
    int sumstw1,sumstw2,sumstw3;
    for (i = 0; i < 3; i++) 
    {
        printf("Enter name of student %d: ", i+1);
        scanf("%s", s[i].name);
        for (j = 0; j < 3; j++) 
        {
            printf("Enter marks for subject %d: ", j+1);
            scanf("%d", &s[i].marks[j]);
        }
    }
    sumstw1 = s[0].marks[0]+s[0].marks[1]+s[0].marks[2];
    sumstw2 = s[1].marks[0]+s[1].marks[1]+s[1].marks[2];
    sumstw3 = s[2].marks[0]+s[2].marks[1]+s[2].marks[2];
    printf("Sum Student-wise:\n%s: %d\n%s: %d\n%s: %d",s[0].name,sumstw1,s[1].name,sumstw2,s[2].name,sumstw3);
    sumsuw1 = s[0].marks[0]+s[1].marks[0]+s[2].marks[0];
    sumsuw2 = s[0].marks[1]+s[1].marks[1]+s[2].marks[1];
    sumsuw3 = s[0].marks[2]+s[1].marks[2]+s[2].marks[2];
    printf("\nSum Subject-wise:\nSubject 1: %d\nSubject 2: %d\nSubject 3: %d",sumsuw1,sumsuw2,sumsuw3);
}
