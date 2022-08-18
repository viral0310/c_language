#include<stdio.h>	
main()
{
	int a,b,c,d;
	
	printf("enter the value of A =");
	scanf("%d",&a);
	
	printf("enter the value of B =");
	scanf("%d",&b);
	
	printf("enter the value of C =");
	scanf("%d",&c);
	
	printf("enter the value of D =");
	scanf("%d",&d);
	
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
		{
			printf("A is big");
		}
		else
		{
			printf("D is big");
		}
		}
		else
		{
			printf("C is big");
		}
		
	}
	else
	{
		if(a>c)
		{
			printf("A is big");
		}
		else
		{
			printf("C is big");
		}
	}
}
