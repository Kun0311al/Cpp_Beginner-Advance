#include <iostream>
#include <malloc.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *create_Node(int data)
{
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->data = data;
    node->right = NULL;
    node->right = NULL;
    return node;
}

struct Node *search_Data(struct Node *root, int data)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == data)
    {
        return root;
    }
    if (root->data > data)
    {
        return search_Data(root->left, data);
    }
    else
    {
        return search_Data(root->right, data);
    }
}

int main()
{
    struct Node *p = create_Node(6);
    struct Node *p1 = create_Node(4);
    struct Node *p2 = create_Node(7);
    struct Node *p3 = create_Node(3);
    struct Node *p4 = create_Node(5);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    struct Node* n = search_Data(p, 3);
    if(n != NULL){
        cout<<"Found: "<<n->data<<endl<<"Address: "<<n;
    }else{
        cout<<"NOT Found.";
    }

    return 0;
}