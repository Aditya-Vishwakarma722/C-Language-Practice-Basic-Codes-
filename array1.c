#include<stdio.h>
int main()
{
    int i,n,arr[10];
    printf("Enter number of elements in the array : ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("Enter Element %d : ",i+1);
        scanf("%d",&arr[i]);
        }

    printf("Entered elements are :\n");
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
        }    
    
    return 0;
}