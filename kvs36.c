#includ<stdio.h>
#include<string.h>
void  main()
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
if(a[i]=="0-9")
{
count++;
}
}
