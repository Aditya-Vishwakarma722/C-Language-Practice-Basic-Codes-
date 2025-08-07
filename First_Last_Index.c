#include<stdio.h>
#define MAX 100

int first_index(int arr[] ,int num, int range){
    for(int i = 0; i<range; i++){
        if(arr[i] == num){
            return i;
        }
    }
    return -1;
}

int last_index(int arr[] ,int num, int range){
    for(int j = range - 1; j>=0; j--){
        if(arr[j] == num){
            return j;
        }
    }
    return -1;
}

int display(int arr[], int range){
    printf("Given Array Elements : ");
    for(int i = 0; i<range; i++){
        printf("%d\t",arr[i]);
    }
}

int main()
{
    int arr[MAX];
    int n;
    int key;

    printf("Enter the Size of the Array : ");
    scanf("%d",&n);

    printf("Enter Array Elements :\n");
    for(int i = 0; i<n; i++){
        printf("Enter Element [%d] : ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("Enter the Element to Search it's First and Last Occurence in the Array : ");
    scanf("%d",&key);

    int first = first_index(arr, key, n);
    int last = last_index(arr, key, n);

    printf("First Occurence of the Element [%d] : %d",key,first);
    printf("\n");
    printf("Last Occurence of the Element [%d] : %d",key,last);

    return 0;
}