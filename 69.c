#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int n,a,b;
	printf("Enter the two number:");
	scanf("%d%d",&a,&b);
	n=a-b;
	if(n%2==0)
	{
	    printf("\neven");
	}
	else
	{
	    printf("\n odd");
	}
	getch();
}
