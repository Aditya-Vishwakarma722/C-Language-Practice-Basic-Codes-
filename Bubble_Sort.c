#include<stdio.h>

void display(int *a, int n)
{
    for(int i = 0 ; i<n ; i++)
    {
        printf("| %d | ", a[i]);
    }
}


void swap(int *num1, int *num2)
{
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}


void bubblesort(int *a, int n)
{
    int sorted = 0;
    for(int i=0 ; i<n-1 ; i++)
    {
        sorted = 1;
        printf("Number of Passes : [%d]\n", i+1);
        for(int j = 0 ; j<n-1-i ; j++)
        {
            if(a[j]>a[j+1])
            {
                swap(&a[j], &a[j+1]);
                sorted = 0;
            }
        }
        
    if(sorted)
    {
        break;
    }
    }
}


int main()
{
    int arr[100];
    int size;

    printf("Enter the Size :\n");
    scanf("%d",&size);

    printf("Enter the Elements :\n");
    for(int i = 0 ; i<size ; i++)
    {
        printf("Enter Element [%d] : ", i+1);
        scanf("%d",&arr[i]);
    }
    printf("\n");

    printf("Array Before Sorting :\n");
    display(arr, size);
    printf("\n");
    
    bubblesort(arr, size);

    printf("Array After Sorting :\n");
    display(arr, size);
    printf("\n");

    return 0;
}