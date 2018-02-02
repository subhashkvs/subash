#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,b,a[3];
    printf("enter the number:");
    scanf("%d",&n);
    for(i=0;i<3;i++)
    {
        a[i]=n%10;
        n=n/10;
    }
    b=a[0]+a[1]+a[2];
    printf("\n%d",b);
    getch();
}
    
