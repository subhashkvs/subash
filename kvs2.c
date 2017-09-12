#include<stdio.h>
#include<conio.h>
void main()
{
int a=2,b=3,c=1;
if((a>b)&&(a>c))
{
printf("a is largest");
}
else if((b>c)&&(b>a))
{
printf("b is largest");
}
else
{
printf("c is largest");
}
getch();
}
