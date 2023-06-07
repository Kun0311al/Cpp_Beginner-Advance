#include<iostream>
#include<malloc.h>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

//creating the new node
struct Node* create_node(int data){
    struct Node* new_Node;
    new_Node = (struct Node*) malloc(sizeof(struct Node));//heap memory allocation
    new_Node->data = data;//setting data
    new_Node->left = NULL;
    new_Node->right = NULL;

    return new_Node;
}

//this code will print pre order of the tree
void preorder(struct Node* root){
    if(root != NULL){
        cout<<root->data<<endl;
        preorder(root->left);
        preorder(root->right);
    }
}

//this code will print the postorder tree
void postorder(struct Node* root){
    if(root != NULL){
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<endl;
    }
}

//this code will give the output for inorder tree
void inorder(struct Node* root){
    if(root != NULL){
        inorder(root->left);
        cout<<root->data<<endl;
        inorder(root->right);
    }
}

int main(){
    // //construction the root node
    // struct Node *p;
    // p = (struct Node*) malloc(sizeof(struct Node));
    // p->left = NULL;
    // p->right = NULL;
    // p->data = 6;

    // //constructiong the lesf node
    // struct Node* p1;
    // p1 = (struct Node*) malloc(sizeof(struct Node));
    // p1->left = NULL;
    // p1->right = NULL;
    // p1->data = 4;

    // //constructiong the right node
    // struct Node* p2;
    // p2 = (struct Node*) malloc(sizeof(struct Node));
    // p2->left = NULL;
    // p2->right = NULL;
    // p2->data = 7;

    // //linking node with each other
    // p->left = p1;
    // p->right = p2;

    //for avoiding this steps we can direct call function
    struct  Node* p = create_node(6);
    struct  Node* p1 = create_node(4);
    struct  Node* p2 = create_node(7);
    struct  Node* p3 = create_node(3);
    struct  Node* p4 = create_node(5);

    //linking node with each other
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    preorder(p);
    cout<<endl;
    postorder(p);
    cout<<endl;
    inorder(p);
    
    return 0;
}