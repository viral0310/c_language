#include<stdio.h>
main()
{
	int a;
	printf("Enter the date =");
	scanf("%d",&a);
	
	if(a%7 == 1 && a<=31)
	{
		printf("saturday");
    }
	else if(a%7 == 2 && a<=31)
	{
		printf("sunday");
    }  
     else if(a%7 == 3 && a<=31)
	{
		printf("monday");
	}
	else if(a%7 == 4 && a<=31)
	{
		printf("tuesday");
	}
	else if(a%7 == 5 && a<=31)
	{
		printf("wednesday");
	}
	else if(a%7 == 6 && a<=31)
	{
		printf("thursday");
	}
	else if(a%7 == 7 && a<=31)
	{
		printf("friday");
	}
    else
    {
    	printf("invaild date");
	}
}
