#include<iostream>
using namespace std;

struct node{
    int data;
    struct node* next;
};

void enqueue(struct node* f, struct node* r, int val){
    struct node* n_node = (struct node*) malloc(sizeof(struct node));
    if (n_node == NULL)
    {
        cout<<"queue is full\n";
    }
    else
    {   
        n_node->data = val;
        n_node->next = NULL;
        if (f == NULL)
        {
            f->next = n_node;
            r->next = n_node;
        }
        else
        { 
            r->next = n_node;
            r = n_node;
        }
        
    }
    
}

int main(){
    struct node* f = NULL;
    struct node* r = NULL;

    enqueue(f, r, 10);
    enqueue(f, r, 3);
    enqueue(f, r, 16);
    enqueue(f, r, 4);
}