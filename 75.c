
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int n,i,m;
    char a[100];
    printf("enter the number:");
    scanf("%s",a);
    n=strlen(a);
        m=n/2;
        a[m]='*';
    for(i=0;i<n;i++)
    {
    printf("%c",a[i]);
    }
    getch();
}
