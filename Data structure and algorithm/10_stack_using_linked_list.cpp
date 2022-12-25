#include<iostream>
using namespace std;
//structure of the node
struct Node{
    int data;
    struct Node* next;
};

//
void traverse_list(struct Node* ptr){
    while(ptr!=NULL){
        cout<<ptr->data<<endl;
        ptr = ptr->next;
    }
}

struct Node* isPush(struct Node* head, int data){
    struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;
    head = ptr;
    return head;
}

struct Node* isPop(struct Node* head){
    struct Node* ptr = head;
    head = head->next;
    free(ptr);
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
}