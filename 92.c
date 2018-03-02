#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,a=0,b;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&b);
    a=a+b;
    }
    printf("sum of number is %d",a);
    getch();
}

