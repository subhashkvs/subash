#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char*a[100];
int i,n,b,count;
printf("enter the sentence");
for(i=0;i<n;i++)
{
scanf("%s",&a[i]);
}
n=strlen(a);
for(i=0;i<n;i++)
{
if(a[i]=="\0")
{
count++;
}
getch();
}
