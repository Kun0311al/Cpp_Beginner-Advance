#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};

void traverse_list(struct Node* head){
    struct Node* ptr = head;// we do this bcoz of we dont want to loose our head
    do
    {
        cout<<ptr->data<<endl;
        ptr = ptr->next;
    } while (ptr!=head);//we use do while bcoz our starting value of ptr is itself head so for kickstart we use
}

//insert the node at first
struct Node* insert_first(struct Node* head, int value){
    struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
    ptr->data = value;
    struct Node* p = head->next;
    while (p->next!=head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    head = ptr;    
    return head;
}

//insert the node at given index
struct Node* insert_between(struct Node* head, int value, int index){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = value;
    int i = 0;
    struct Node* p = head;
    while (i!=index-1)
    {
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    p->next = ptr;
    return head;
    
}

//insert the node at the end
struct Node* insert_end(struct Node* head, int value){
    struct Node* ptr= (struct Node*) malloc(sizeof(struct Node));
    ptr->data = value;
    struct Node* p = head->next;
    while (p->next!=head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;  
    return head;  
}

//insert the node after the given value node
struct Node* insert_after_node(struct Node* head, int data, int node){
    struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node* q = head->next;
    while (q->data!=node)
    {
        q = q->next;
    }
    ptr->next = q->next;
    q->next = ptr;
    return head;

}

int main(){
    struct Node* head = (struct Node*) malloc(sizeof(struct Node));
    struct Node* second = (struct Node*) malloc(sizeof(struct Node));
    struct Node* third = (struct Node*) malloc(sizeof(struct Node));
    struct Node* forth = (struct Node*) malloc(sizeof(struct Node));
    struct Node* fifth = (struct Node*) malloc(sizeof(struct Node));

    head ->data = 10;
    head ->next = second;

    second -> data = 04;
    second -> next = third;

    third -> data = 03;
    third -> next = forth;

    forth -> data = 05;
    forth -> next = fifth;

    fifth -> data = 30;
    fifth -> next = head;

    traverse_list(head);
    cout<<endl;
    head = insert_first(head, 103);
    traverse_list(head);
    cout<<endl;
    head = insert_end(head, 310);
    traverse_list(head);
    cout<<endl;
    head = insert_between(head, 301, 3);
    traverse_list(head);
    cout<<endl;
    head = insert_after_node(head, 310, 10);
    traverse_list(head);
    cout<<endl;
}
//deletion in circular linked list is same as the singly linked list do changes acording to it