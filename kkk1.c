#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int n,i;
    char c[100];
    printf("enter the line");
    scanf("%s",&c);
    printf("enter the number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%s",c);
    }
    getch();
}
