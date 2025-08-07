#include<stdio.h>

void traverse(int array[], int size)
{
    printf("Elements in the Array :\n");
    for(int i=0;i<size;i++){
        printf("%d\t",array[i]);
    }
    printf("\n");
}

void insertion(int arr[], int total, int arrsize, int item, int index){
    if(arrsize>=total){
    printf("Array Overloaded\n");
    }

    for(int i=arrsize;i>=index;i--){
        arr[i+1]=arr[i];
    }
    arr[index]=item;
}


int main()
{
    int arr[100], capacity, asize, element, location;
    printf("Enter the Size of the Array [ <100 ] :\n");
    scanf("%d",&capacity);
    printf("\n");

    printf("Enter the Size to be Used for the Array :\n");
    scanf("%d",&asize);
    printf("\n");
    
    printf("Enter the Elements of the Array :\n");
    for(int i=0;i<asize;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n");

    traverse(arr,asize);

    printf("Enter the Element to be Inserted :\n");
    scanf("%d",&element);
    printf("\n");

    printf("Enter the Location to insert the Element :\n");
    scanf("%d",&location);
    printf("\n");

    insertion(arr, capacity, asize, element, location);
    asize+=1;

    printf("Array after the Element is Inserted :\n");
    traverse(arr,asize);

    return 0;
}