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

//delete the first node
struct Node* delete_start(struct Node* head){
    struct Node* ptr = head;
    head = head->next;
    free(ptr);//free the not required node
    return head;
}

//delete the given index node
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

/*alternatine for delete between here p if following q
struct Node* delete_between(struct Node* head, int index){
    struct Node *p = head;
    struct Node *q = head->next;
    for (int i = 0; i < index-1; i++)
    {
        p = p->next;
        q = q->next;
    }
    
    p->next = q->next;
    free(q);
    return head;
}
*/

//delete the end node
struct Node* delete_end(struct Node* head){
    struct Node* p = head;
    struct Node* q = head->next;
    while (q->next!=NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return (head);    

}

//delete the given value node
struct Node* delete_value_node(struct Node* head, int value){
    struct Node *p = head;
    struct Node *q = head->next;
    while(q->data!=value && q->next!= NULL)
    {
        p = p->next;
        q = q->next;
    }
    
    if(q->data == value){
        p->next = q->next;
        free(q);
    }
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
    head = delete_end(head);
    traverse_list(head);
    cout<<endl;
    head = delete_value_node(head, 3);
    traverse_list(head);
    cout<<endl;
}