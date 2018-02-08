#include<stdio.h>
#include<conio.h>
void main()
{
    int n,a,i;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      if(n=(2^i))
      {
          a=2*n;
          printf("\n%d",a);
      }
     }
     getch();
}
