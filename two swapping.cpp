#include<stdio.h>
main()
{
	int a,b;
	
	printf("Enter the value of A=");
	scanf("%d",&a);
	
	printf("Enter the value of B=");
	scanf("%d",&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("Value after swapping\n");
	printf("value of A %d\n",a);
	printf("Value of B %d",b);
}
