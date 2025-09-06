#include<stdio.h>
#include<stdlib.h>

void rotation(int n, int arr[], int final[], int key){
    int j=0;

    for(int i = key ; i<n ; i++){
        final[j++] = arr[i];
    }

    for(int i = 0 ; i<key ; i++){
        final[j++] = arr[i];
    }

}

void display(int res[], int n){
    for(int i = 0 ;i<n ; i++){
        printf("%d  ",res[i]);
    }
    printf("\n");
}

int main(){
    int size;
    printf("Enter the Size of the Array : ");
    scanf("%d",&size);

    int arr[size];
    int res[size];

    printf("Enter the Element >>>>\n");
    for(int i = 0 ; i<size ; i++){
        printf("Enter Element [%d] : ",i+1);
        scanf("%d",&arr[i]);
    }

    int k;
    printf("Enter the Index from Which you want to Rotate the Array : ");
    scanf("%d",&k);

    rotation(size, arr, res, k);

    printf("Rotated Array : ");
    display(res,size);
}