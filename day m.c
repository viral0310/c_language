#include<stdio.h>
main()
{
	char ch;
	 
	printf("enter \nm for Monday \nt for Tuesday\nw for Wednesday\nh for Thursday\nf for Friday\ns for Saturday\nu for Sunday \n");
	printf("...............\n");
	scanf("%c",&ch);
	
	switch(ch)
	{
		case 'm':
		case 'M': 
			printf("monday \n");
		break;
		case 't':
		case 'T':
			printf("tuesday \n");
			break;
		case 'w':
		case 'W':
			printf("wednesday \n");
			break;
		case 'h':
		case 'H':
			printf("thursday \n");
			break;
		case 'f ':
		case 'F':
			printf("friday \n");
			break;
		case 's':
		case 'S':
			printf("saturday \n");
			break;
		case 'u':
		case 'U':
			printf("sunday \n");
			break;
		default: 
			printf("wrong input \n");
			break;
	}
}
