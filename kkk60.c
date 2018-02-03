#include<stdio.h>
#include<conio.h>
void main()
{
    int n,a=0,b=1,temp,i;
    printf("enter the number:");
    scanf("%d",&n);
    printf("%d",b);
    for(i=1;i<n;i++)
    {
        
        temp=a+b;
        a=b;
        b=temp;
        printf("%d",temp);
    }
    getch();
}
