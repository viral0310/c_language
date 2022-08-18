#include<stdio.h>
void reverse(int a[100], int n);

main()
{
 	int a[100], i, n;

 	printf("Enter n:");
 	scanf("%d", &n);

 	for(i=0;i< n;i++)
 	{
  		printf("a[%d]=",i);
  		scanf("%d", &a[i]);
 	}

 	reverse(a,n);

 	printf("Reversed array is:\n");
 	for(i=0;i< n;i++)
	 {
 		 printf("%d\t", a[i]);
	 }
}

void reverse(int a[100], int n)
{
	 int i, temp;
 	for(i=0;i< n/2;i++)
 	{
  		temp = a[i];
 		 a[i] = a[n-1-i];
  		a[n-1-i] = temp;
 	}
}
