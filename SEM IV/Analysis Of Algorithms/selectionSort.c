#include <stdio.h>  
  
void selection(int A[], int n)  {  
    int i, j, x, min;  
    
    for(i = 0; i<(n-1); i++) {  
        min = i; 
        x = A[i];
        for(j = i+1; j < n; j++) {
	        if(A[j] < x){
	            min = j;
	            x = A[j];
			}
		}
		
    	A[min] = A[i];  
    	A[i] = x;  
    }  
}  
  
void printA(int a[], int n)  {  
    int i;  
    for (i = 0; i < n; i++){
        printf("%d ", a[i]);
	}
}  
  
int main()  
{
	int a[10], i, n;
	printf("How many numbers you want to sort:  ");
    scanf("%d", &n);
    printf("\nEnter %d numbers\t", n);
    printf("\n");
    for (i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}

	selection(a, n);
	printf("\nSorted array is: ");
    for (i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
        
    return 0;
}    
