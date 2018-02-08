#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	if(n%7==0)
	{
	    printf("\nyes");
	}
	else
	{
	    printf("\n no");
	}
	getch();
}
