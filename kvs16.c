#include<stdi.h>
#include<conio.h>
void main()
{
int i,a,n,c=0;
printf("enter the value of a");
scanf("%d",&a);
printf("enter the value of n");
scanf("%d",&n);
for(i=a+1;i<n;i++)
{
for(i=1;i<n;i++)
{
  c++;
}
  if(c=2)
{
printf("the value is %d",&i);
}
}
getch();
}
