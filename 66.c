#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int n,i,count=0;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			count++;
			break;
		}
	}
	if(count==0)
	{
		printf("This is a prime number");
	}
	else
	{
		printf("This is not a prime number");
	}
	getch();
}
