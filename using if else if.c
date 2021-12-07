#include<stdio.h>
void main()
{
	int n,day;
	printf("enter a latter");
	scanf("%d",&n);
	if(n==1)
	{
		printf("the  given number is monday");
	}
	else if (n==2)
	{
		printf("the given number is tuesday");
	}
	else if (n==3)
	{
		printf("the given number is wednesday");
	}
	else if (n==4)
	{
		printf("the given number is thursday");
	}
	else if (n==5)
	{
		printf("the given number is friday");
	}
	else if(n==6)
	{
		printf("the given number is saturday");
	}
	else if (n==7)
	{
		printf("the given number is sumday");
	}
	else 
	{
		printf(" the given number is not matched");
	}
}
