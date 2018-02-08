#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,n;
printf("enter two number:");
scanf("%d %d",&a,&b);
n=a+b;
if(n%2==0)
{
    printf("\neven");
}
else
{
    printf("\nodd");
}
getch();
}

