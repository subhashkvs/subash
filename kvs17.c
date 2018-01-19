#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c=0,i;
printf("enter the number");
scanf("%d",&a);
b=a;
while(b!=0)
{
rem=b%10;
c=c+rem*rem*rem;
b=b/10;
}
if(c==a)
{
printf("the given number is amstrong");
}
else
{
printf("not amstrong");
}
getch();
}
