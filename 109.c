#include <stdio.h>
#include<conio.h>
void main() 
{
int a[10],temp,i,j,n;
printf("enter the limit:");
scanf("%d",&n);
printf("enter the number:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
      for(j=i+1;j<n;j++)
      {
              if(a[i]>a[j])
              {
                      temp=a[i];
                      a[i]=a[j];
                      a[j]=temp;
              }
      }
}
for(i=0;i<n;i++)
{
        printf("%d",a[i]);
}
printf("\n%d",a[0]);
getch();
}
