#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};

void traverse_list(struct Node* ptr){
    while(ptr!=NULL){
        cout<<ptr->data<<endl;
        ptr = ptr->next;
    }
}

struct Node* delete_start(struct Node* head){
    struct Node* ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

struct Node* delete_between(struct Node* head, int index){
    struct Node* ptr = head;
    int i = 0;

    while (i!=index-1)
    {
        ptr = ptr->next;
        i++;
    }
    struct Node* p = ptr->next;
    ptr->next = p->next;
    free(p);
    return(head);

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

    fifth -> data = 3;
    fifth -> next = NULL;

    traverse_list(head);
    cout<<endl;
    head = delete_start(head);
    traverse_list(head);
    cout<<endl;
    head = delete_between(head, 3);
    traverse_list(head);
    cout<<endl;
}