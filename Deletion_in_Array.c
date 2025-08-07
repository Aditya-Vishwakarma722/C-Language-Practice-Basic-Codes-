#include<stdio.h>
#include<stdlib.h>

void traverse(int ary[], int size)
{
    for(int i=0;i<size;i++){
        printf("%d\t",ary[i]);
    }
}

void elementdelete(int ary[], int *usize, int num)
{
     for(int i=0;i<*usize;i++){
        if(num==ary[i])
        {
            for(int j=i;j<*usize-1;j++)
            {
                ary[j]=ary[j+1];
            }
            (*usize)--;
            break;
        }
     }
}

void indexdelete(int ary[],int *usize,int location)
{
    if(location<0 || location>=*usize)
    return;
    for(int i=location;i<*usize-1;i++){
        ary[i]=ary[i+1];
    }
    (*usize)--;
}

int main()
{
    int arr[100],tsize,usedsize,choice;
    printf("Enter the Total Size of the Array :\n");
    scanf("%d",&tsize);
    printf("\n");

    printf("Enter the Size of the Array You want to Use :\n");
    scanf("%d",&usedsize);
    printf("\n");

    printf("Enter Elements :\n");
    for(int i=0;i<usedsize;i++)
    {
        printf("Enter Element [%d] : ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("Your Entered Elements are :\n");
    traverse(arr,usedsize);
    printf("\n");

    printf("Choose : [1 - Delete an Element Directly] | [2 - Delete an Element from its Index]\n");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
    {
        int element;
        printf("Enter the Element to be Deleted :\n");
        scanf("%d",&element);
        printf("\n");
        elementdelete(arr,&usedsize,element);
        printf("Elements after Deletion are :\n");
        traverse(arr,usedsize);
        break;
    }

    case 2:
    {
        int Index;
        printf("Enter the Index to be Deleted :\n");
        scanf("%d",&Index);
        printf("\n");
        indexdelete(arr,&usedsize,Index);
        printf("Elements after Deletion are :\n");
        traverse(arr,usedsize);
        break;
    }

    default:
    printf("Wrong Number Entered!");
        break;
    }
    return 0;
}