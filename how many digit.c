#include<stdio.h>
main()
{
	 
    int j,i = 0;

    
    printf("Enter any number: ");
    scanf("%d", &j);

   
    do
    {
     
        i++;

        
        j /= 10;
    } while(j != 0);

    printf("Total digits: %d", i);

    

}
