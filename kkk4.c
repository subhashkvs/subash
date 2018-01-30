#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    if(n>=0 && n<=10)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    getch();
}
