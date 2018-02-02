#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,n;
    printf("enter the two number:");
    scanf("%d %d",&a,&b);
    n=a*b;
    if(n%2==0)
    {
    printf("it is even");
    }
    else
    {
        printf("it is odd");
    }
    getch();
}
  
