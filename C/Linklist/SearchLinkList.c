#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
struct Node
{
    int data;
    struct Node *next;
};

// creat link list

// find item from list

struct Node *insertAtBegin(struct Node *root, int data)
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
void print(struct Node *temp)
{
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

bool search(struct Node *head, int data)
{
    while (head != NULL)
    {
        /* code */
        if (head->data == data)
        {
            return true;
        }
        head = head->next;
    }
    return false;
}
int main()
{
    struct Node *root = NULL;

    printf("enter the how many number to  add in linklist:");
    int count = 0;
    scanf("%d", &count);

    for (int i = 0; i < count; i++)
    {
        int num = 0;
        scanf("%d", &num);
        root = insertAtBegin(root, num);
    }
    printf("inteseted and begineing\n");
    print(root);
    printf("enter number to serach :");
    int searchitem = 0;
    scanf("%d", &searchitem);
    if (search(root, searchitem))
    {
        printf("\n%d number is present", searchitem);
    }
    else
    {
        printf("\n%d number not is present", searchitem);
    }
    return 0;
}