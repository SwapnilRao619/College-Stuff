#include<stdio.h>
#define QW 30.00
#define MW 40.00
#define FW 30.00
void main()
{
    float q1,q2,q3,q4,qt,m1,m2,mt,f,wq,wm,wf,total;
    printf("Quiz 1: ");
    scanf("%f",&q1);
    printf("Quiz 2: ");
    scanf("%f",&q2);
    printf("Quiz 3: ");
    scanf("%f",&q3);
    printf("Quiz 4: ");
    scanf("%f",&q4);
    printf("Midterm 1: ");
    scanf("%f",&m1);
    printf("Midterm 2: ");
    scanf("%f",&m2);
    printf("Finals: ");
    scanf("%f",&f);
    qt = q1+q2+q3+q4;
    mt = m1+m2;
    wq = qt*(QW/400);
    wm = mt*(MW/200);
    wf = f*(FW/100);
    total = wq+wm+wf;
    printf(" quiz 1:%.2f\n",q1);
    printf(" quiz 2:%.2f\n",q2);
    printf(" quiz 3:%.2f\n",q3);
    printf(" quiz 4:%.2f\n",q4);
    printf("quiz total:%.2f\n",qt);
    printf("midterm 1:%.2f\n",m1);
    printf("midterm 2:%.2f\n",m2);
    printf("midterm total:%.2f\n",mt);
    printf("final :%.2f\n",f);
    printf("quiz %.2f\n",wq);
    printf("midterm %.2f\n",wm);
    printf("final %.2f\n",wf);
    printf("total %.2f\n",total);
}