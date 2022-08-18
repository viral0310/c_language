#include<stdio.h>
int main()
{

    int arr[100];
    int n, i;

    printf("Enter size of the array: ");
    scanf("%d", &n);
    
    printf("Enter element in array:\n ");
    for(i=0; i<n; i++)
    {
    	scanf("\n %d", &arr[i]);
    }

    printf("\nArray in reverse order: ");
    for(i = n-1; i>=0; i--)
    {
        printf("\n%d", arr[i]);
    }

}
