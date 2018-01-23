#include<stdio.h>
#include<conio.h>
void main()
{
int a[10]={5,4,3,2,1,6,10,8,9};
int i,j,temp;
 for(i=0;i<10;i++)
 {
 for(j=i+1;j<10];j++)
 {
 if(a[i]<a[j])
 {
  temp=a[i];
   a[i]=a[j];
   a[j]=temp;
 }
  for(i=0;i<10;i++)
  {
    printf("%d",a[i]);
  }
   printf("the maximum number is :%d",a[10]);
   getch();
}

