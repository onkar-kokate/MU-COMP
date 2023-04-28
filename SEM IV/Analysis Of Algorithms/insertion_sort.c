#include <math.h>
#include <stdio.h>

int i,n,a[50];
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
 
        /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
 
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
int main()
{
    printf("Enter size of array to be inserted:");
    scanf("%d",&n);
    printf("Enter array element to be sorted:");
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Before sorting array elemrnts are -\n");
    printArray(a, n);
    insertionSort(a, n);
    printf("After sorting array elemrnts are -\n");    
    printArray(a, n);
    return 0;
}