#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char c[10];
    int n,i;
    printf("enter the letter:");
    scanf("%s",c);
    n=strlen(c);
    for(i=0;i<n;i++)
    {
     if(c[i]=='a' || c[i]=='e' || c[i]=='i' || c[i]=='o' || c[i]=='u') 
      {
          printf("\nvowals");
      }
      else
      {
          printf("\nnot vowels");
      }
    }
    getch();
}
