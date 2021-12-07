#include<stdio.h>
void main()
{
	int a,b;
	printf("enter a number a");
	scanf("%d",&a);
	printf("enter a number b");
	scanf("%d",&b);
	if (a<b)
	{
		printf("%d  is larger number",b);
	}
	else if  (a>b)
	{
		printf("%d is smaller number ",a);
	}
	else 
	{
		printf(" %d both are equal"); 
	}
	

	
}
