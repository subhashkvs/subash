#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int n,i,d;
char a[100],b[100];
printf("enter the two line:");
scanf("%s%s",&a,&b);
n=strlen(a);
d=strlen(b);
if(n<=d)
{
printf("%s",b);
}
else
{
    printf("%s",a);
}
getch();
}
