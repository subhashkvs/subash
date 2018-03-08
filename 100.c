#include<stdio.h>
#include<conio.h>
void main()
{
        int n,a=1,r,i;
        printf("enter the number");
        scanf("%d",&n);
        for(i=0;n!=0;i++)
        {
                r=n%10;
                a=a*r;
                n=n/10;
        }
        printf("the product of digit is %d",a);
        getch();
}

