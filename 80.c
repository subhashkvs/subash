
#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],b,i,n;
    for(i=0;i<5;i++)
    {
    printf("enter the number:");
    scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
    if(a[i]%2!=0)
    {
        printf("\n%d",a[i]);
    }
    }
    getch();
}
