#include <stdio.h> 
#include<conio.h>
void main() 
{
int n;
printf("Enter the number:");
scanf("%d",&n);
if(n>=0 && n<=10)
{
    printf("\n10");
}
else if(n>=11 && n<=20)
{
    printf("\n20");
}
else if(n>=21 && n<=30)
{
    printf("\n30");
}
else if(n>=31 && n<=40)
{
    printf("\n40");
}
else if(n>=41 && n<=50)
{
    printf("\n50");
}
else
{
    printf("enter less than 50");
}
getch();
}
