#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char a[10];
    int n,b,i;
   printf("enter the line:");
    scanf("%s",&a);
    printf("enter the limit:");
    scanf("%d",&b);
    n=strlen(a);
    for(i=0;i<=n;i++)
    {
    printf("%s",a[i]);
    }
    getch();
}
