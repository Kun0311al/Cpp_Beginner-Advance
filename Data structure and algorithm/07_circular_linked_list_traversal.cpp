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
    } while (ptr!=head);
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
    fifth -> next = head;

    traverse_list(head);
    cout<<endl;
}