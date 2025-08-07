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

// Create a new node
struct node* CreateNode(int data)
{
    struct node* new = (struct node*)malloc(sizeof(struct node));
    new->data = data;
    new->left = NULL;
    new->right = NULL;
    return new;
}

// Insertion function (Fix message and logic)
void insertion(struct node *root, int key)
{
    struct node *prev = NULL;

    while (root != NULL)
    {
        prev = root;
        if (key == root->data)
        {
            printf("You can't insert %d, it is already in the BST!\n", key);
            return;
        }

        else if (key < root->data)
        {
            root = root->left;
        }

        else
        {
            root = root->right;
        }
    }

    // Create the new node after traversing
    struct node* newnode = CreateNode(key);
    if (key < prev->data)
    {
        prev->left = newnode;
    }
    else
    {
        prev->right = newnode;
    }
}

// Preorder traversal (recursive)
void preorder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);   // Visit the node
        preorder(root->left);        // Traverse the left subtree
        preorder(root->right);       // Traverse the right subtree
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

    // Creating the BST structure
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

    // Take user input for new number to insert
    int num;
    printf("Enter a number to insert: ");
    scanf("%d", &num);

    // Perform insertion
    insertion(root, num);

    // Print the tree after insertion (Preorder traversal)
    printf("BST after insertion [Preorder]: ");
    preorder(root);

    return 0;
}
