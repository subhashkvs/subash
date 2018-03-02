#include<stdio.h>
#include<conio.h>
void main()
{
    int n,p,t,r;
    printf("enter the amount,time,rate:");
    scanf("%d%d%d",&p,&t,&r);
    n=(p*t*r)/100;
    printf("\n%d",n);
}
