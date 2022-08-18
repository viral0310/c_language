#include<stdio.h>
int fect(int a);
main()
{
	int z;
	
	z = fect(5);
	printf("%d",z);
}
int fect(int a)
{
	if(a<=1)
	{
		return 1;
	}
	
	return a*fect(a-1);
}
