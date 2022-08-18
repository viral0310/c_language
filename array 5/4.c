#include<stdio.h>
 
int main()
{
    int a[100];
    int v, n, i, ps, nv, nv1, ps1, ps2;
    
    printf("Enter the value of n=");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
    	printf("a[%d]=%d",i,a[i]);
	}
    
    printf("\npress 1 for insert=\n");
    printf("press 2 for update=\n");
    printf("press 3 for delete=\n");
    scanf("%d",&v);
    
    if(v<=3)
    {
    
    if(v==1)
    {
        printf("Enter the Insert new number=");
        scanf("%d",&nv);
    
        printf("Enter the position=");
        scanf("%d",&ps);
		
		for(i=n;i>=ps;i--)
		{
			a[i+1]=a[i];
		} 
		
		a[ps]=nv;
		
		for(i=0;i<n+1;i++)
		{
			printf(" %d ",a[i]);
		}
    }
    
    if(v==2)
    {
    	 printf("Enter the Insert new value=");
        scanf("%d",&nv1);
    
        printf("Enter the position=");
        scanf("%d",&ps1);
		
		a[ps1]=nv1;
		
		for(i=0;i<n;i++)
		{
			printf(" %d ",a[i]);
		}
	}
	
	if(v==3)
	{
        printf("Enter the position=");
        scanf("%d",&ps2);
		
		for(i=ps2;i<n;i++)
		{
			a[i]=a[i+1];
		} 
		
		for(i=0;i<n-1;i++)
		{
			printf(" %d ",a[i]);
		}
	}
    
        
    }
    
    else
    {
        printf("press the wrong number");
    }
	
}
