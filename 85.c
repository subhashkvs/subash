#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[100];
int i,n;
printf("enter the string:");
scanf("%s",&a);
n=strlen(a);
for(i=0;i<n;i++)
{
    if(i%2==0)
    {
        printf("\n even letter is %c",a[i]);
    }
   else
    {
      printf("\nodd letter is %c",a[i]);
    }
}
getch();
}
