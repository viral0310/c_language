#include<stdio.h>
int main()
{
	int a[100];
	int i,n,nv,ps;
	
	printf("Enter the size of Array=");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter the array element=");
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		printf(" a[%d]=%d\n",i,a[i]);
	}
	
	printf("\nEnetr the new element=");
	scanf("%d",&nv);
	
	printf("Enter the new position=");
	scanf("%d",&ps);
	
	for(i=n;i>=ps;i--)
	{
		a[i+1]=a[i];
	}
	
	a[ps]=nv;
	
	for(i=0;i<n+1;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
}
