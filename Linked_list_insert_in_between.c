#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void traverse(struct node *head)
{
    printf("Element in the Nodes :\t");
    while(head!=NULL){
        printf("%d\t",head->data);
        head=head->next;
    }
    printf("\n");
}

struct node *insert_in_between(struct node *first, int element, int location){
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    struct node *box=first;
    int i=0;
    while(i!=location-1){
        box = box->next;
        i++;
    }
    ptr->data=element;
    ptr->next=box->next;
    box->next=ptr;
    return first;
}  

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *forth;;
    struct node *fifth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    forth = (struct node *)malloc(sizeof(struct node));
    fifth = (struct node *)malloc(sizeof(struct node));

    head->data=432;
    head->next=second;

    second->data=868;
    second->next=third;

    third->data=163;
    third->next=forth;

    forth->data=725;
    forth->next=fifth;

    fifth->data=916;
    fifth->next=NULL;

    traverse(head);

    int num;
    printf("Enter the Number to Insert : ");
    scanf("%d",&num);

    int index;
    printf("Enter the Index at which the Node is Inserted : ");
    scanf("%d",&index);

    head=insert_in_between(head,num,index);
    traverse(head);
}