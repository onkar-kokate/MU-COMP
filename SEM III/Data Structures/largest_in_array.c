#include<stdio.h>

void main()
{
	int a[10], i, n, lar=0;
	
	printf ("Enter the size of an array (Max 10): ");
	scanf ("%d",&n);
	
	for (i=0; i<n; i++)
	{
		printf ("\nEnter array element %d: ",i);
		scanf ("%d", &a[i]);
	}
	
	printf ("\nElements of array:");
	for (i=0; i<n; i++)
	{
		printf ("\n%d", a[i]);
	}
	
	for (i=0; i<n; i++)
	{
		if(lar<a[i])
		{
			lar = a[i];
		}
	}
	
	printf ("\n\nLargest element in array is: %d",lar);
}
