#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("enter value of a=");
	scanf("%d",&a);
	printf("enter value of b=");
	scanf("%d",&b);
	printf("enter value of c=");
	scanf("%d",&c);
	printf("enter value of d=");
	scanf("%d",&d);
	if (a==b && b==c && a==d)
	{
		printf("all value is same.");
	}
	else
	{
		if(a==b)
		{
			printf("a and b same.");
		}
		else if(b==c)
		{
			printf("b and c same.");
		}
		else if(c==d)
		{
			printf("c and a same.");
		}
		else if(d==a)
		{
			printf("d and a same");
		}
		else
		{
			if (a>b)
			{
				if (a>c)
				{
					if(a>d)
					{
						printf("a is max....");
					}
					else
					{
						printf("d is max....");
					}
				}
				else
				{
					if(c>d)
					{
						printf("c is max....");
					}
					else
					{
						printf("d is max.....");
					}
				}
			}
			else
			{
				if(b>c)
				{
					if(b>d)
					{
						printf("b is max......");
					}
					else
					{
						printf("d is max......");
					}
				}
				else
				{
					if(c>d)
					{
						printf("c is max....");
					}
					else
					{
						printf("d is max.....");
					}
				}
			}
		}
	}

}

















