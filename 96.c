#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,count=0;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    if(n%i==0)
    {
        count++;
    }
    }
    if(count==2)
    {
        printf("not composite number");
    }
    else
    {
        printf("composite number");
    }
    getch();
}
