#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int n,a[100],b,i,count=0;
    printf("enter the limit:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the number");
    scanf("%d",&b);
    for(i=0;i<n;i++)
    {
        if(a[i]==b)
        {
        count++;
        }
     }
     printf("%d",count);
    getch();
}
