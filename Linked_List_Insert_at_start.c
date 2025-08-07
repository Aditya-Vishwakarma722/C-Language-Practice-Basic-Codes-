#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void traverse (struct node *ptr){
    while(ptr!=NULL){
    printf("%d\t",ptr->data);
    ptr=ptr->next;
    }
    printf("\n");
}

struct node *insert_at_start (struct node *newhead, int data){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=newhead;
    return ptr;
}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    int num;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head->data=10;
    head->next=second;

    second->data=20;
    second->next=third;

    third->data=30;
    third->next=fourth;

    fourth->data=40;
    fourth->next=NULL;

    traverse(head);

    printf("Enter the Number : ");
    scanf("%d",&num);

    head=insert_at_start(head,num);

    traverse(head);
}