#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,a,b,c=0;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=0;i<2;i++)
    {
        a=n%10;
        c=(c*10)+a;
        n=n/10;
    }
 printf("%d",c);   
}
