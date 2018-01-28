#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,temp;
printf("enter the two number");
scanf("%d%d",&a,&b);
temp=a;
a=b;
b=temp;
printf("swaped number is %d %d",a,b);
getch();
}
