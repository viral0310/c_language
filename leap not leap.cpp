#include<stdio.h>	
main()
	
{	
	int a;
	printf("Enter the year");
	scanf("%d",&a);
	
	if(a%4==0)
	{
		printf("Year is leap");
	}
	else
	{
		printf("Year is not leap");
	}
} 
