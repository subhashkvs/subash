#include<stdio.h>
#include<conio.h>
void main()
{
int a[]={1,2,3,4,5,6,7,8,9,10},i,n,b;
printf("enter the number");
scanf("%d",&n);
b=a[0];
for(i=0;i<n;i++)
{
if(a[i]<b)
{
b=a[i];
}
}
printf("smallest is:%d",b}
getch();
}

