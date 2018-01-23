#include<stdio.h>
#include<conio.h>
void main()
{
int fib=1,i,n;
printf("enter the number");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
fib=i+fib;
printf("%d",fib);
}

