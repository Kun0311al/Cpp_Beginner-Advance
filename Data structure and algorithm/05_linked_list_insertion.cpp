#include<iostream>
using namespace std;

//define structure of the node
struct Node{
    int data;
    struct Node* next;
};

// traversal function who travel all the nodes in list
void traversal_Node(struct Node* ptr){
    while (ptr!=NULL)
    {
        cout<<ptr->data<<"\n";
        ptr= ptr->next;
    }
    
}

//structure function who insert the node at the start 
struct Node* insert_First(struct Node* head, int data){
    struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
    ptr->next= head;
    ptr->data= data;
    return ptr;
}

// structure function who insert the node at the between or at the given index
struct Node* insert_between(struct Node* head, int data, int index){
    struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
    struct Node* p = head;
    int i = 0;

    // while the give index doesn't reach
    while (i!=index-1)
    {
        p = p->next;
        i++;
    }
    //connection of new node
    ptr ->data = data;
    ptr->next = p->next;
    p->next = ptr;  
    return head;  
}

//structure function who insert the new node at the end
struct Node* insert_end(struct Node* head, int data){
    struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
    struct Node* p = head;

    // while the next is not null
    while (p->next != NULL)
    {
        p = p->next;
    }
    //connection of new node
    ptr ->data = data;
    ptr->next = NULL;
    p->next = ptr;  
    return head;  
}

int main(){
    struct Node* head = (struct Node*) malloc(sizeof(struct Node));
    struct Node* second = (struct Node*) malloc(sizeof(struct Node));
    struct Node* third = (struct Node*) malloc(sizeof(struct Node));

    head -> data = 3;
    head -> next = second;

    second -> data = 23;
    second -> next = third;

    third -> data = 33;
    third -> next = NULL;

    traversal_Node(head);
    cout<<endl;
    head=insert_First(head, 10);
    traversal_Node(head);
    cout<<endl;
    head = insert_between(head, 30, 3);
    traversal_Node(head);
    cout<<endl;
    insert_end(head, 05);
    traversal_Node(head);
    cout<<endl;
}