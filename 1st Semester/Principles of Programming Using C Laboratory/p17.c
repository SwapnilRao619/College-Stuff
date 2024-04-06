#include<stdio.h>
void gcdlcm(int n1, int n2)
{
    int small,gcd,lcm;
    int count = 1;
    if(n1<n2)
        small = n1;
    else
        small = n2;
    while(count<=small)
    {
        if(n1%count == 0 && n2%count == 0)
        {
            gcd = count;
        }
        count++;
    }
    lcm = (n1*n2)/gcd;
    printf("GCD: %d and LCM: %d",gcd,lcm);
}
int main()
{
    int n1,n2;
    printf("Enter the two numbers: ");
    scanf("%d %d",&n1,&n2);
    gcdlcm(n1,n2);
    return 0;
}