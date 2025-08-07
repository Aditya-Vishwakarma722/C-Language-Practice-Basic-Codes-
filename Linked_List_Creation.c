#include<stdio.h>
#include<stdlib.h>

struct node
{
    int num;
    struct node *next;
};

void traversal(struct node *ptr)
{
    while(ptr!=NULL){
        printf("%d\t",ptr->num);
        ptr=ptr->next;
    }
}

int main()
{
    struct node *first;
    struct node *second;
    struct node *third;

    first=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));

    first->num=10;
    first->next=second;

    second->num=20;
    second->next=third;

    third->num=30;
    third->next=NULL;

    traversal(first);

    return 0;
}