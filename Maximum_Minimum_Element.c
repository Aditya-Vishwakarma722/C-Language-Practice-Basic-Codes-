#include<stdio.h>
int main()
{
    int i,n,largest,smallest,arr[100];
    printf("Enter no. of Elements :\n");
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
    printf("Enter Element [%d] : ",i+1);
    scanf("%d",&arr[i]);
    }

    printf("\n");

    smallest = largest = arr[0];

    for(i=0;i<n;i++){
    if(largest<arr[i]){
        largest=arr[i];
    }    
    }

    for(i=0;i<n;i++){
    if(smallest>arr[i]){
        smallest=arr[i];
    }    
    }
    
    printf("Smallest Number : %d\n",smallest);
    printf("Largest Number : %d\n",largest);
    return 0;
}