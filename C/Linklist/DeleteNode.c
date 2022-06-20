#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
struct Node
{
    int data;
    struct Node *next;
};

// create node at begin
struct Node *createAtBegin(struct Node *root, int data)
{

    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    if (root == NULL)
    {
        root = temp;
        return root;
    }
    temp->next = root;
    root = temp;
    return root;
}

// print
void print(struct Node *temp)
{
    while (temp != NULL)
    {
        /* code */
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

// delete node

bool delete (struct Node *head, int data)
{
    struct Node *temp = NULL;
    struct Node *prev = NULL;

    while (head != NULL)
    {
        /* code */
        if (head->data == data)
        {
            temp = head;
            prev->next = head->next;
            break;
        }
        prev = head;
        head = head->next;
    }
    if (temp != NULL)
    {

        free(temp);
        return true;
    }
    return false;
}

int main()
{
    int count = 0;
    printf("enter how many number neect do insert in linklist :");
    scanf("%d", &count);

    struct Node *root = NULL;

    for (int i = 0; i < count; i++)
    {
        int num = 0;
        printf("enter number:");
        scanf("%d\n", &num);

        root = createAtBegin(root, num);
        fflush(stdin);
    }
    printf("printing numbers\n");
    print(root);
    int deleteitem = 0;
    printf("enter number too delete:\n");
    scanf("%d", &deleteitem);

    if (delete (root, deleteitem))
    {
        printf("item delete\n");
        printf("printing numbers\n");
        print(root);
    }
    else
    {
        printf("item not found\n");
        printf("printing numbers\n");
        print(root);
    }

    return 0;
}