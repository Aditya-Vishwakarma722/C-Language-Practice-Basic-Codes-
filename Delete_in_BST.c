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

void deletion(struct node* root, int data){
    
    struct node* I 

    if(root == NULL){
        return NULL;
    }

    if(root->left == NULL && root->right == NULL){
        free(root);
        return NULL;
    }


}

void preorder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);  
        preorder(root->left);        
        preorder(root->right);       
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

    int num;
    printf("Enter a number to insert: ");
    scanf("%d", &num);

    insertion(root, num);

    printf("BST after insertion [Preorder]: ");
    preorder(root);

    return 0;
}
