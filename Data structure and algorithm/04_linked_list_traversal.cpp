#include<iostream>
#include<stdlib.h>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};

//traversal in linked list
void travels_list(struct Node* ptr){
    while (ptr!=NULL)
    {
        cout<<ptr -> data<<"\n";
        ptr = ptr->next;
    }
    
}

int main(){
    struct Node* head;
    struct Node* second;
    struct Node* third;

    // allocated memory of linked list in heap
    head = (struct Node*) malloc(sizeof(struct Node));
    second = (struct Node*) malloc(sizeof(struct Node));
    third = (struct Node*) malloc(sizeof(struct Node));

    //link the first node to second
    head -> data = 3;
    head -> next = second;

    //link second node to third
    second -> data = 12;
    second -> next = third;

    //last node in the list
    third ->data = 5;
    third -> next = NULL;

    //call traversal function
    travels_list(head);
}