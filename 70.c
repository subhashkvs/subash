#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int n,i,b;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        b=pow(2,i);
        if(b==2*n)
        printf("\n%d",b);
    }  
     getch();
}
