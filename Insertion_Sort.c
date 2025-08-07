#include<stdio.h>

void display(int *a, int n)
{
    for(int i=0 ; i<n ; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}

void insertionSort (int *a, int n)
{
    int key, i, j;

    for(i=1 ; i<=n-1 ; i++){
        
        key = a[i];
        j = i-1;

        while(j>=0 && a[j]>key)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
    
}


int main()
{
    int arr[] = {73, 13, 2, 92, 43, 10};
    int size = 6;

    printf("Array Before Sorting : ");
    display(arr, size);
    printf("\n");

    selectionSort(arr, size);

    printf("Array After Sorting : ");
    display(arr, size);

    return 0;
}