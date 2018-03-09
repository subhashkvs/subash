#include<stdio.h>
#include<conio.h>
void main()
{
    int a,d,n,sum=0,next,i;
    printf("enter the number");
    scanf("%d%d%d",&a,&d,&n);
    next=a;
    for(i=0;i<n;i++)
    {
        sum=sum+next;
        next=next+d;
    }
    printf("\n%d",sum);
    getch();
}
