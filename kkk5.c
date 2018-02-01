#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int n,count=0,i;
printf("enter the number:");
scanf("%d",&n);
for(i=0;i<5;i++)
{
    if(n!=0)
    {
        n=n/10;
        count++;
    }
}
    printf("\n%d",count);
    

getch();
}
