#include<stdio.h>
#include<conio.h>

int binarySearch(int a[], int x, int lb, int ub)
{
	if(ub >= lb)
	{
		int mid = lb + (ub - lb)/2;
		if(a[mid]==x)
		{
			return mid;
		}
		if(a[mid] > x)
		{
			return binarySearch(a,x,lb,mid-1);
		}
		return binarySearch(a,x,mid+1,ub);
	}
	return -1;
}

void main()
{
	int a[20];
	int i, result, n, s;
	clrscr();
	printf("How many elements you want to enter: \n");
	scanf("%d", &n);
	printf("Enter the elements: \n");
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("\nEnter the element to be searched: ");
	scanf("%d", &s);

	result= binarySearch(a,s,0,n-1);

	if(result == -1)
	{
		printf("\n%d not found in the given array", s);
	}
	else
	{
		printf("\n%d is found at position %d", s, result+1);
	}

	getch();
}
