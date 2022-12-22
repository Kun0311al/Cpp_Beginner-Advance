#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};

int main(){
    struct Node* head;
    Node *head = new Node (sizeof(struct Node*));
}