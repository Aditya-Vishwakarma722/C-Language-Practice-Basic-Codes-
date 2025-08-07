#include<stdio.h>
#include<stdlib.h>

//              50
//           /      \ 
//          40       70
//         /  \     /  \ 
//        20  30   60  80





struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* CreateNode(int data)
{
    struct node* new;
    new = (struct node*)malloc(sizeof(struct node));
    new->data = data;
    new->left = NULL;
    new->right = NULL;
    return new;
}

void PreOrder(struct node* root)
{
    if(root!=NULL){
        printf("%d ", root->data);
        PreOrder(root->left);
        PreOrder(root->right);
    }
}

void PostOrder(struct node* root)
{
    if(root!=NULL){
        PostOrder(root->left);
        PostOrder(root->right);
        printf("%d ",root->data); 
    }
}

void InOrder(struct node* root)
{
    if(root!=NULL){
        InOrder(root->left);
        printf("%d ",root->data);
        InOrder(root->right);
    }
}

struct node* search(struct node* root, int key)
{
    if(root==NULL){
    return NULL;
    }

    if(key==root->data)
    {
        printf("Element Found!\n");
        return root;
    }

    else if(root->data>key)
    {
        return search(root->left, key);
    }
    else
    {
        return search(root->right, key);
    }
}

int main()
{
    struct node* root;
    struct node* left_0;
    struct node* right_0;
    struct node* left_0_1;
    struct node* left_0_2;
    struct node* right_0_1;
    struct node* right_0_2;

    root = CreateNode(50);
    left_0 = CreateNode(40);
    right_0 = CreateNode(70);
    left_0_1 = CreateNode(20);
    left_0_2 = CreateNode(30);
    right_0_1 = CreateNode(60);
    right_0_2 = CreateNode(80);


    root->left = left_0;
    root->right = right_0;
    
    left_0->left = left_0_1;
    left_0->right = left_0_2;

    right_0->left = right_0_1;
    right_0->right = right_0_2;

    printf("Pre Order => ");
    PreOrder(root);
    printf("\n");

    printf("Post Order => ");
    PostOrder(root);
    printf("\n");

    printf("In Order => ");
    InOrder(root);
    printf("\n");
    
    int token;
    printf("Enter an Element to Search : ");
    scanf("%d",&token);
    struct node* result = search(root, token);
    if(result==NULL){
        printf("Element Not Found!");
    }

} 