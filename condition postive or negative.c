#include<stdio.h>
void main()
{
	int a;
	printf("enter a number to check its a postive or negative");
	scanf("%d",&a);
	if(0>a)
	{
		printf(" %d the given number is negative",a);
	}
	else
	{
		printf("%d the given number id positive",a);
	}
}
