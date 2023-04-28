#include<stdio.h>
#include<conio.h>
void main()
{
    int i,k,j,minj,minx,arr[5];
    printf("\nEnter five integer elements: ");
    for (i=0; i<5; i++)
    {
        printf("\nElement %d: ",i+1);
        scanf("%d", &arr[i]);
    }
    for (i=0;i<4;i++)
    {
        minj=i;
        minx=arr[i];
        for (j=i+1; j<5; j++)
        {
            if(arr[j]<minx)
            {
                minj=j;
                minx=arr[j];
            }
        }
        arr[minj]=arr[i];
        arr[i]=minx;
        printf("\n%d Iteration level: ", i+1);
        for(k=0;k<5;k++)
        {
            printf("%d ", arr[k]);
        }
    }
    printf("\nSorted element in ascending order:");
    for (i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    getch();
}