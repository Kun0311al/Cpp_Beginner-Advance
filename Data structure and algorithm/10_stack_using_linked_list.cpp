#include<iostream>
using namespace std;
//structure of the node
struct Node{
    int data;
    struct Node* next;
};

//to check the list or stack id enmty or not
int isEmpty(struct Node* top){
    if (top==NULL){
        return 1;
    }
    else{
        return 0;
    }
}

//to check the list or stack is full or not
int isFull(struct Node* top){
    struct Node* p = (struct Node*)malloc(sizeof(struct Node));
    if(p==NULL){
        return 1;
    }
    else{
        return 0;
    }
}

//for traversing the all list
void traverse_list(struct Node* ptr){
    while(ptr!=NULL){
        cout<<ptr->data<<endl;
        ptr = ptr->next;
    }
}

//function to push the new element in the stack
struct Node* isPush(struct Node* head, int data){
    if (isFull(head))
    {
        cout<<"stack is overflow\n";
    }else{
        struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
        ptr->data = data;
        ptr->next = head;
        head = ptr;
        return head;
    }
    return 0;
}

//function to pop the element from the stack
struct Node* isPop(struct Node* head){
    if (isEmpty(head))
    {
        cout<<"stack is underflow\n";
    }else{
        struct Node* ptr = head;
        head = head->next;
        free(ptr);
        return head;
    }
    return 0;
}

struct Node* peek(struct Node* head, int index){
    struct Node* ptr = head;
    for (int i = 0; (i < index && ptr!=NULL); i++)
    {
        ptr = ptr->next;
    }
    if(ptr!=NULL){
        cout<<ptr->data<<endl;
    }else{
        cout<<"index not found\n";
    }
    return head;
}

int main(){
    struct Node* head = (struct Node*) malloc(sizeof(struct Node));
    struct Node* second = (struct Node*) malloc(sizeof(struct Node));
    struct Node* third = (struct Node*) malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;

    second->data = 3;
    second->next = third;

    third->data = 4;
    third->next = NULL;

    traverse_list(head);
    cout<<endl;
    head = isPush(head, 16);
    traverse_list(head);
    cout<<endl;
    head = isPop(head);
    traverse_list(head);
    cout<<endl;
    head = peek(head, 2);
    cout<<endl;
}