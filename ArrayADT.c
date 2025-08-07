#include<stdio.h>
#include<stdlib.h>

struct ArrayADT
{
    int total_size;
    int used_size;
    int *ptr;
};

void maker(struct ArrayADT *arr, int tsize, int usize)
{
    arr->total_size=tsize;
    arr->used_size=usize;
    arr->ptr=(int *)malloc(tsize*sizeof(int));
}

void traverse(struct ArrayADT *arr)
{
    for(int i=0;i<arr->used_size;i++)
    {
        printf("Value %d : %d\n",i+1,arr->ptr[i]);
    }
}


int main()
{
    struct ArrayADT array;
    maker(&array,20,5);
    traverse(&array);
}
