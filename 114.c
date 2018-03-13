#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int n,a[100],b,i,count=0;
    printf("enter the limit:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the number:");
    scanf("%d",&b);
        if(a[b]%2!=0)
        {
        printf("%d",a[b]);
        }
    getch();
}
