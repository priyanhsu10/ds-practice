#include <iostream>
#include <queue>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
};
// get node
Node *getNode(int data)
{
    mp;
}
// insert node in tree
Node *insertNode(Node *root, int data)
{

    if (root == NULL)
    {
        return getNode(data);
    }
    if (data < root->data)
    {
        root->left = insertNode(root->left, data);
    }
    else
    {
        root->right = insertNode(root->right, data);
    }
    return root;
}
// level order traversal
void levelorder(Node *root)
{

    queue<Node *> st;
    if (root == NULL)
    {
        return;
    }
    st.push(root);

    while (!st.empty())
    {
        int level = 0;
        Node *node = st.front();
        for (int i = 0; i <= level; i++)
        {
            cout << "--";
        }
        cout << node->data;
        cout << "\n";

        if (node->left != NULL)
        {
            level++;
            st.push(node->left);
        }
        if (node->right != NULL)
        {
            level++;
            st.push(node->right);
        }
        st.pop();

        /* code */
    }
}
void preorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << ",";

    if (root->left != NULL)
    {
        preorder(root->left);
    }

    if (root->right != NULL)
    {
        preorder(root->right);
    }
}
void postorder(Node *root)
{

    if (root == NULL)
    {
        return;
    }
    if (root->left)
    {

        inorder(root->left);
    }
    if (root->right != NULL)
    {
        inorder(root->right);
    }
    cout << root->data << ",";
}
void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    if (root->left)
    {

        inorder(root->left);
    }
    cout << root->data << ",";
    if (root->right != NULL)
    {
        inorder(root->right);
    }
}
int main()
{
    Node *root = NULL;
    root = insertNode(root, 60);
    root = insertNode(root, 40);

    root = insertNode(root, 80);

    root = insertNode(root, 90);

    root = insertNode(root, 160);

    root = insertNode(root, 20);

    root = insertNode(root, 900);

    root = insertNode(root, 10);
    cout << "level order traversal";
    levelorder(root);
    cout << "\n++++++++++++++++++++++\n";
    cout << "Pre order traversal\n";
    preorder(root);
    cout << "\n in order traversal\n";
    inorder(root);

    return 0;
}
