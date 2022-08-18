#include<stdio.h>
main()
{
	int s , h,d,t, a;
	
	printf("Enter the salary =");
	scanf("%d",&s);
	
	h=s*10/100;
	printf("hra=%d\n",h);
	
	d=s*5/100;
	printf("da= %d\n",d);
	
	t=s*8/100;
	printf("ta= %d\n",t);
	
	a=s+h+d+t;
	printf("amount= %d",a);
}
