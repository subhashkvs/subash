#include<stdio.h>
#include<conio.h>
void main()
{
int n,count=0;
printf("enter the number");
scanf("%d",&n);
while(count<4)
{
n=n\10;
count ++;
}
  printf("the count is %d"count);
getch();
}
