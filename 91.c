#include<stdio.h>
#include<conio.h>
void main()
{
    int l,b,h,n;
    printf("enter the length:");
    scanf("%d",&l);
    printf("enter the breath:");
    scanf("%d",&b);
    printf("enter the height:");
    scanf("%d",&h);
    n=l*b*h;
    printf("\n%d",n);
    getch();
}

