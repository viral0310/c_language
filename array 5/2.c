#include<stdio.h>
#include <limits.h>
int main()
{
  int n,i, a[100];
 
  printf("Enter the size: ");
  scanf("%d",&n);
 
  printf("Enter the elements: ");
  for(i=0; i<n; i++)
  {
    scanf("%d",&a[i]);
  }
    
  int max = INT_MIN;
  int secondmax = INT_MIN;
    
  for(i=0; i<n; i++)
  {

    if(a[i]>max)
    {
      secondmax = max;
      max = a[i];
    }
    
    else if(a[i]<max && a[i]>secondmax)
    {
      secondmax = a[i];
    }
  }
 
  printf("Second largest element is %d",secondmax);
 
}
