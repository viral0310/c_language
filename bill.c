#include<stdio.h>
main()
{
	float a,b,b1,c,c1,d,f,g,bill;
	printf("Enter the number of unit:");
	scanf("%f",&a);
	if(a<=50)
	{
		bill=a*0.50;
		printf("Total amount   =%.2f\n",bill);
	}
	else if(a>=50&&a<=150)
	{
		b=a-50;
		b1=b*0.75;
		c=0.50*50;
		bill=c+b1;
		printf("Total amount is:%.2f",bill);		
	}
	else if(a>=150&&a<=250)
	{
		c=150-a;
		b=0.50*50;
		b1=0.75*100;
		c1=c*1.27;
		bill=b+c1+b1;
		printf("Total amount:%.2f",bill);
	}
	
}
