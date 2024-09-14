#include <iostream>
using namespace std;

struct treeNode
{
    int data;
    treeNode *left;
    treeNode *right;

    treeNode(int value) : data(value), left(nullptr), right(nullptr) {};
};

treeNode *insert(treeNode *root, int value)
{
    if (root == nullptr)
    {
        return new treeNode(value);
    }
    if (value < root->data)
    {
        root->left = insert(root->left, value);
    }
    else
    {
        root->right = insert(root->right, value);
    }
    return root;
}

bool search(treeNode *root, int value)
{
    if (root == nullptr)
    {
        return false;
    }
    if (root->data == value)
    {
        return true;
    }
    else if (value < root->data)
    {
        return search(root->left, value);
    }
    else
    {
        return search(root->right, value);
    }
}

treeNode *findMin(treeNode *root)
{
    while (root && root->left != nullptr)
    {
        root = root->left;
    }
    return root;
}

treeNode *deleteNode(treeNode *root, int value)
{
    if (root == nullptr)
    {
        return root;
    }

    if (value < root->data)
    {
        root->left = deleteNode(root->left, value);
    }
    else if (value > root->data)
    {
        root->right = deleteNode(root->right, value);
    }
    else
    {
        // Node with only one child or no child
        if (root->left == nullptr)
        {
            treeNode *temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == nullptr)
        {
            treeNode *temp = root->left;
            delete root;
            return temp;
        }

        // Node with two children: Get the inorder successor (smallest in the right subtree)
        treeNode *temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}
void inorder(treeNode *root)
{
    if (root != nullptr)
    {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}
int main()
{
    treeNode *root = nullptr;

    // Insert nodes into the BST
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    cout << "In-order traversal: ";
    inorder(root);
    cout << endl;

    // Search for a value
    int valueToSearch = 40;
    if (search(root, valueToSearch))
    {
        cout << valueToSearch << " found in the BST." << endl;
    }
    else
    {
        cout << valueToSearch << " not found in the BST." << endl;
    }

    // Delete a node
    int valueToDelete = 50;
    root = deleteNode(root, valueToDelete);

    cout << "In-order traversal after deletion of 50: ";
    inorder(root);
    cout << endl;

    return 0;
}