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

//Recurcive search Technique
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

//Iterative method to search in BST
struct Node* search_Iter(struct Node* root, int data){
    while(root != NULL){
        if(root->data == data){
            return root;
        }else if(root->data > data){
            root = root->left;
        }else{
            root = root->right;
        }
    }
    return NULL;
}

//insertion of data in BST
struct Node* insert_Node(struct Node* root, int data){
    struct Node* prev = NULL;
    while(root != NULL){
        prev = root;
        if(data == root->data){
            return root;
        }else if(data < root->data){
            root = root->left;
        }else{
            root = root->right;
        }
    }
    if (data < prev->data)
    {
        prev->left = create_Node(data);
    }else{
        prev->right = create_Node(data);
    }
    return root;    
}

struct Node *inOrderPredecessor(struct Node* root){
    root = root->left;
    while (root->right!=NULL)
    {
        root = root->right;
    }
    return root;
}

struct Node *deleteNode(struct Node *root, int value){

    struct Node* iPre;
    if (root == NULL){
        return NULL;
    }
    if (root->left==NULL&&root->right==NULL){
        free(root);
        return NULL;
    }

    //searching for the node to be deleted
    if (value < root->data){
        root-> left = deleteNode(root->left,value);
    }
    else if (value > root->data){
        root-> right = deleteNode(root->right,value);
    }
    //deletion strategy when the node is found
    else{
        iPre = inOrderPredecessor(root);
        root->data = iPre->data;
        root->left = deleteNode(root->left, iPre->data);
    }
    return root;
}

// this code will give the output for inorder tree
void inOrder(struct Node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        cout << root->data << endl;
        inOrder(root->right);
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

    insert_Node(p, 10);

    struct Node* n = search_Data(p, 3);
    if(n != NULL){
        cout<<"Found: "<<n->data<<endl<<"Address: "<<n<<endl;
    }else{
        cout<<"NOT Found."<<endl;
    }

    cout<<"Iterative output\n";
    struct Node* n1 = search_Iter(p, 10);
    if(n1 != NULL){
        cout<<"Found: "<<n1->data<<endl<<"Address: "<<n1<<endl;
    }else{
        cout<<"NOT Found."<<endl;
    }


    inOrder(p);
    printf("\n");
    deleteNode(p, 3);
    inOrder(p);

    return 0;
}