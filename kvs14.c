#include<stdi.h>
#include<conio.h>
void main()
{
int i,a,n;
printf("enter the value of a");
scanf("%d",&a);
printf("enter the value of n");
scanf("%d",&n);
for(i=a+1;i<n;i++)
{
if(i%2!==0)
{
printf("the value is %d",&i);
}
}
getch();
}
