#include<stdio.h>
int main()
{
    int i,n,largest,arr[100];
    printf("Enter no. of Elements :\n");
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
    printf("Enter Element [%d] : ",i+1);
    scanf("%d",&arr[i]);
    }

    printf("\n");

    largest = arr[0];

    for(i=0;i<n;i++){
    if(largest<arr[i]){
        largest=arr[i];
    }    
    }
    printf("Largest Number : %d",largest);
    return 0;
}