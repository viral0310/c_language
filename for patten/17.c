#include<stdio.h>
int main()
{
	int i,j,k;
	
	for(i=1;i<5;i++)
	{
		for(j=5-1;j>=i;j--)
		{
			
			printf(" ");
		}
					
		for(k=1;k<=i;k++)
		{
			printf("%d",k);
		}
		
		printf("\n");
	}
	
	for(i=1;i<=5;i++)
	{
		
		for(k=1;k<i;k++)
		{
			printf(" ");
		}
		for(j=i;j<=5;j++)
		{
			
			printf("%d",j);
		}
		
		printf("\n");
	
	}	
}
