#include<stdi.h>
#include<conio.h>
void main()
{
int i,a,n,b,res,rem;
printf("enter the value of a");
scanf("%d",&a);
printf("enter the value of n");
scanf("%d",&n);
b=a;
for(i=a+1;i<n;i++)
{
while(b!=0)
{
 rem=b%10;
 res=res+rem*rem*rem;
 b=b/10;
}
  if(res==a)
{
printf("the value is %d",&i);
}
}
getch();
}
