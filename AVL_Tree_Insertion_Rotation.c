#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
    int height;
};

int inorder(struct node *root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
    printf("\n");
}

int max(int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

int checkheight(struct node *n){
    if(n == NULL){
        return 0;
    }
    return n->height;
}

struct node *createnode(int data){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->left = NULL;
    ptr->right = NULL;
    ptr->height = 1;
    return ptr;
}

int BalanceFactor(struct node* node){
    if(node == NULL){
        return 0;
    }
    return checkheight(node->left) - checkheight(node->right);
}

struct node *rightRotate(struct node *y){
    struct node *x = y->left;
    struct node *T2 = x->right;

    x->right = y;
    y->left = T2;

    x->height = max(checkheight(x->left),checkheight(x->right))+1;
    y->height = max(checkheight(y->left),checkheight(y->right))+1;

    return x;
}

struct node *LeftRotate(struct node *x){
    struct node *y = x->right;
    struct node *T2 = y->left;

    y->left = x;
    x->right = T2;

    x->height = max(checkheight(x->left),checkheight(x->right))+1;
    y->height = max(checkheight(y->left),checkheight(y->right))+1;

    return x;
}

struct node *insert(struct node *node, int data){
    if(node == NULL){
        return (createnode(data));
    }

    if(data < node->data){
        node->left = insert(node->left, data);
    }

    if(data > node->data){
        node->right = insert(node->right, data);
    }

    node->height = 1 + max(checkheight(node->left),checkheight(node->right));

    int BF = BalanceFactor(node);

    // Left Left Case
    if(BF>1 && data<node->left->data){
        node = rightRotate(node);
    }

    // Right Right Case
    if(BF<-1 && data>node->right->data){
        node = LeftRotate(node);
    }
    
    // Left Right Case
    if(BF>1 && data>node->left->data){
        node->left = LeftRotate(node);
        node = rightRotate(node);
    }
    
    // Right Left Case
    if(BF<-1 && data<node->right->data){
        node->right = rightRotate(node);
        node = LeftRotate(node);
    }

    return node;
}

int main()
{
    int choice;
    char op;
    int num;
    struct node *root = NULL;

    do{
        printf("--AVL Tree Menu--\n");
        printf("1. Insert\t2. Inorder Traversal\t3. Exit\n");
        printf("Enter Your Choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1 :
            printf("Enter data to Insert : ");
            scanf("%d",&num);
            root = insert(root, num);
            break;

            case 2 :
            inorder(root);
            break;

            case 3 :
            printf("Exiting...\n");
            exit(0);
            break;

            default :
            printf("Invalid Input! Try Again!\n");
            break;
        }
        printf("Do you want to Continue [Y/N] : ");
        scanf(" %c",&op);

    }while(op == 'y' || op == 'Y');
    return 0;
}