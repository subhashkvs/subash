#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int n,a,b,i,count=0;
    printf("enter the number:");
    scanf("%d",&a);
    for(i=0;a!=0;i++)
    {
        n=a%10;
        count++;
        a=a/10;
    }
    printf("%d",count);
}
