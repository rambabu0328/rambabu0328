#include <stdio.h>
void main()
{
	int marks;
	printf("eneter marks");
	scanf("%d",&marks);
	if (marks >=80)
	{
		printf(" grade A");
	}
	else if ( marks >=70)
	{
		printf("grade B");
	}
	else if ( marks >=60)
	{
		printf(" grade C");
	}
	else if ( marks >=50)
	{
		printf(" grade D");
	}
	else
	{ 
	 printf ("fail");
	}
}
