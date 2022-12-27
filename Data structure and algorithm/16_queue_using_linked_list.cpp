#include<iostream>
using namespace std;

//globally declaration of front and rear pointer
struct node* f = NULL;
struct node* r = NULL;

//structure of node
struct node{
    int data;
    struct node* next;
};

//enqueue the new node in the linked list
void enqueue(int val){
    struct node* n_node = (struct node*) malloc(sizeof(struct node));
    if (n_node == NULL)//rear condition if there is not space in heap to create a node
    {
        cout<<"queue is full\n";
    }
    else
    {   
        n_node->data = val;
        n_node->next = NULL;
        if (f == NULL)//at the time of insertion of first node
        {
            f = r = n_node;//rear and front at first new node
        }
        else
        { 
            r->next = n_node;
            r = n_node;
        }
        cout<<"enqueued element: "<<n_node->data<<endl;
    }
}

//dequeue the node from queue
int dequeue(){
    struct node* ptr = f;//set pointer at first pointer
    int val=-1;
    if (f == NULL)//check queue is empty or not
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

//enqueue the elements
    enqueue(10);
    enqueue(3);
    enqueue(16);
    enqueue(4);

    int val;
//dequeue the elements from the list
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