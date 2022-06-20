#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

// create node ;
struct Node *insert(struct Node *root, int data)
{

    if (root == NULL)
    {
        struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
        temp->data = data;
        temp->left = temp->right = NULL;
        return temp;
    }
    if (root->data >= data)
    {

        // left
        root->left = insert(root->left, data);
    }
    else
    {
        root->right = insert(root->right, data);
        // right
    }
    return root;
}

// search node in tree

bool search(struct Node *root, int data)
{
    if (root->data == data)
    {
        return true;
    }
    else if (root->data >= data)
    {
        return search(root->left, data);
    }
    else
    {
        return search(root->right, data);
    }
}
int main()
{
    struct Node *root = NULL;
    root = insert(root, 5);
    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 25);
    root = insert(root, 30);
    root = insert(root, 35);
    root = insert(root, 40);

    if (search(root, 30))
    {
        printf("found ");
    }
    else
    {
        printf("not found ");
    }

    return 0;
}
