
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char a[10];
    int n,i,count=0;
    printf("enter the number:");
    scanf("%s",&a[i]);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        if(a[i]!=" ")
        {
            count++;
           
        }
    }
     printf("%d",count);
    getch();
}

