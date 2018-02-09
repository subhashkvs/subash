#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char a[10];
    int n,i,count;
    printf("enter the number:");
    scanf("%s",a);
    n=strlen(a);
    for(i=0;i<=n;i++)
    {
        if((a[i]=='0') || (a[i]=='1'))
        {
          count++;
       }
    }

    if(count==n)
     {
           printf("\nyes");
        }
       else
       {
           printf("no");
       }
    
    
    getch();
}

