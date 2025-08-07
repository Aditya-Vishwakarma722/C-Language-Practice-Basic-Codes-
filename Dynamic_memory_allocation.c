#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n=4;
    int *ptr;
    ptr=(int*)malloc(n*sizeof(int*));
    ptr[0]=12;
    ptr[1]=42;
    ptr[2]=54;
    ptr[3]=79;
    for(int i=0;i<n;i++){
        printf("%d\t",ptr[i]);
    }
    return 0; 
}