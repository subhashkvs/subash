
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int a,b,c,n,i;
    printf("enter the number:");
    scanf("%d",&a);
    printf("enter the left number:");
    scanf("%d",&b);
    printf("enter the right number:");
    scanf("%d",&c);
    for(i=b;i<=c;i++)
    {
    if(i==a)
    {
        printf("\nyes");
    }
    }    
getch();
}
