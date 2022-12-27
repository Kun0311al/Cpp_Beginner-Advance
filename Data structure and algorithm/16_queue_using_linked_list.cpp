#include<iostream>
using namespace std;


struct node* f = NULL;
struct node* r = NULL;

struct node{
    int data;
    struct node* next;
};

int enqueue(int val){
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
            f = r = n_node;
        }
        else
        { 
            r->next = n_node;
            r = n_node;
        }
        cout<<"enqueued element: "<<n_node->data<<endl;
    }
}

int dequeue(){
    struct node* ptr = f;
    int val=-1;
    if (f == NULL)
    {
        cout<<"queue is empty\n";
    }
    else
    {
        f = f->next;
        val = ptr->data;
        free(ptr);
    }
    return val;
    
}

int main(){

    enqueue(10);
    enqueue(3);
    enqueue(16);
    enqueue(4);

    int val;

    val = dequeue();
    cout<<"dequeue element: "<<val<<endl;
    val = dequeue();
    cout<<"dequeue element: "<<val<<endl;
    val = dequeue();
    cout<<"dequeue element: "<<val<<endl;
    val = dequeue();
    cout<<"dequeue element: "<<val<<endl;

    enqueue(10);
    enqueue(3);
}