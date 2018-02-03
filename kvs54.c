#include<stdio.h>
#include<conio.h>
void main()
{
    int n,a;
    printf("enter the number:");
    scanf("%d",&n);
    if(n%2!=0)
    {
        a=n-1;
        printf("\n%d",a);
    }
    else
    {
        printf("\n%d",n);
    }
    getch();
}
