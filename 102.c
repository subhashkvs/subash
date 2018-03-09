#include<stdio.h>
void main()
{
	int n;
	printf("Enter the Number:");
	scanf("%d",&n);
	while(n%2==0)
	{
	    n=n/2;
	}
	printf("\n%d",n);
	getch();
}
