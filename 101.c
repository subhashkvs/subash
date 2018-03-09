#include<stdio.h>
#include<conio.h>
void main()
{
    char a[100];
    int n,i,m;
    printf("enter the string:");
     scanf("%s",a);   
    printf("enter the number:");
    scanf("%d",&n);
    m=strlen(a);
    for(i=n;i<m;i++)
    {
    printf("%c",a[i]);    
    }
    getch();
}
