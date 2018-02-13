#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char a[100];
    int n,i,j,temp;
    printf("enter the name:");
    scanf("%s",a);
    temp=a[i];
    n=strlen(a);
    for(i=n-1;i>=0;i--)
    {
      printf("\n%c",a[i]);
    }
    if(temp==a[i])
    {
        printf("\n it is correct");
    }
    else
    {
       printf("\n not correct");
    }
    getch();
}
