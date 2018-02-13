
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int a,i;
    printf("enter the number:");
    scanf("%d",&a);
    if(a%13==0)
    {
        printf("\nyes");
    }
    else
    {
        printf("no");
    }
    getch();
}
