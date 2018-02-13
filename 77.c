
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int a,i,fact=1;
    printf("enter the number:");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
        printf("%d",i);
        }
    }
    getch();
}
