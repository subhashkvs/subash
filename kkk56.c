
#include <stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char a[100];
    int i,n;
    printf("enter the line:");
    scanf("%c",&a[i]);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
    if((a[i]>='a'||a[i]<='z' )&& (a[i]>=0||a[i]<=9))  
    printf("yes");
    else
    printf("no");
    }
    getch();
}
   
