#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter value a  =>");
	scanf("%d",&a);
	
	printf("enter value b  =>");
	scanf("%d",&b);


	printf("enter 1 for + \n");
	printf("enter 2 for -  \n");
	printf("enter 3 for *  \n");
	printf("enter 4 for / \n =>");
	scanf("%d",&c);
	
	
	switch(c)
	{
		case 1 :
			printf(" %d ",a+b);
			break;
		case 2 :
			printf(" %d ",a-b);
			break;
		case 3 :
			printf(" %d ",a*b);
			break;
		case 4 :
			printf(" %d ",a/b);
			break;
		default :
				printf("invalid number.");
	}
}
