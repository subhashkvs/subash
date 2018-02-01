#include<stdio.h>
#include<conio.h>
void main()
{
int a[3]={6,2,1};
int i,j,temp,n;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
if(a[i]<a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
for(i=0;i<3;i++)
{
printf("%d",a[i]);
}
printf("\n%d%d",a[0],a[2]);
getch();
}
