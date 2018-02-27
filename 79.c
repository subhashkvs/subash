#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,n,m,i;
printf("enter the number:");
scanf("%d%d",&a,&b);
n=a*b;
for(i=1;i<10;i++)
{
    m=i*i;
    if(m==n)
    {
        printf("yes");
    }
}
getch();
}
