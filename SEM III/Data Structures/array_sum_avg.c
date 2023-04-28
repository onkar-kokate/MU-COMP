#include<stdio.h>
 
int main()
{
 int i, n, a[10], sum=0;
 float avg;
  
 printf("Enter Size of An Array : ");
 scanf("%d", &n);
  
 printf("Enter array elements:\n");
 for(i=0; i<n; i++)
 {
  printf("Enter element %d = ", i);
  scanf("%d", &a[i]);
  sum = sum + a[i];
 }
  
 avg = sum/n;
  
 /* Displaying Result */
 printf("Sum is %d\n", sum);
 printf("Average is %f", avg);
  
 return 0;
}
