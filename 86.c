#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[100];
int i,j,n,count=0,temp;
printf("enter the string:");
scanf("%s",&a);
n=strlen(a);
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
    if(a[i]!=a[j])
    {
        count++;
    }
}
}
if(n==count)
{
    printf("yes");
}
else
{
    printf("no");
}
getch();
}
