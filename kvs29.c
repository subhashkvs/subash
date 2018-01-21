#include<stdio.h>
#include<conio.h>
void main()
{
int n;
float c;
printf("enter the number");
scanf("%d",&n);
if(n<60)
{
printf("0.%d",n);
}
else
{
c=n/60;
printf("%f",c);
}
getch();
}
