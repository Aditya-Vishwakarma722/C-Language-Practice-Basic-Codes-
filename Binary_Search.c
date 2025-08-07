#include<stdio.h>

void binary_search(int arr[],int limit, int num)
{
    int mid, low, high;
    low=0;
    high=limit-1;

    while (low<=high)
    {
        mid=(low+high)/2;

        if(arr[mid]==num){
            printf("Element found at Index %d",mid);
            return;
        }

        if(arr[mid]<num){
            low=mid+1;
        }

        else{
            high=mid-1;
        }
    }
    printf("Element not found");
    
}

int main()
{
    int arr[10]={12,42,64,78,98,102,247},size=7,element;
    
    printf("Given Elements are :\n");
    for(int i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");

    printf("Enter an Element to Search :\t");
    scanf("%d",&element);

    binary_search(arr,size,element);
    return 0;
}