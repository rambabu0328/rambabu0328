#include<stdio.h>
void main()
{
	int a,b,c,d;
	printf("enter four numbers\n");
	scanf("%d%d%d%d", &a,&b,&c,&d);
	if (a>b && a>c && a>d)
	{
		printf("%d is the largest numbedr ",a);
	}
    else if (b>a && b>c && b>d)
    {
    	printf(" %d is the largest numvber",b);
	}
	else if (c>a && c>b && c>d)
	{
		printf ("%d is the lagest numner ",c);
	}
	else 
	{
		printf(" %d is the largest number",d);
	}
	
}
