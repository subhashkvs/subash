#include<stdio.h>
#include<conio.h>
void main()
{
        int a[10],i,n,temp,j;
        printf("enter the limit:");
        scanf("%d",&n);
        printf("enter the number:");
         for(i=0;i<n;i++)
        {
                scanf("\t%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
                if(a[i]!=i+1)
                {
                        printf("%d",i+1);
                }
        }
getch();
}
