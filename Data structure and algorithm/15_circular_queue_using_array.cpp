#include<iostream>
using namespace std;

//structure of queue
struct queue{
    int size;
    int f;
    int r;
    int* arr;
};

//enque the new element in the queue
void enqueue(struct queue* ary, int val){
    if ((ary->r+1)%ary->size == ary->f)//checking the next place of rear pointer in not equal to front pointer
    {
        cout<<"array is full\n";
    }
    else
    {
        ary->r = (ary->r+1)%ary->size;//in circular linked list we use i = (i+1)%size for incrementing the i bcoz
                                      //after last element of i we get 0 againg in this condition
        ary->arr[ary->r] = val;//adding the value at the rear pointer
        cout<<"enqueue element: "<<val<<endl;
    }
    
}

//to remove the element from the queue
int dequeue(struct queue* ary){
    int val = -1;
    if (ary->f == ary->r)//checking the front and rear pointer are not at the same place
    {
        cout<<"array is empty\n";
    }
    else
    {
        ary->f = (ary->f+1)%ary->size; //incrementing the front pointer by one
        val = ary->arr[ary->f];//setting val = element at the front pointer
    }
    return val;
}

int main(){
    //allocating heap memory
    struct queue* q = (struct queue*)malloc(sizeof(struct queue));
    q->size = 10;
    q->f = q->r = -1;
    q->arr = (int*)malloc(q->size*sizeof(int));

    //enqueueing the elements in queue from last
    enqueue(q, 10);
    enqueue(q, 3);
    enqueue(q, 16);

    int val;
    //dequeueing the elements from the list front
    val = dequeue(q);
    cout<<"dequeued element: "<<val<<endl;
    val = dequeue(q);
    cout<<"dequeued element: "<<val<<endl;
    val = dequeue(q);
    cout<<"dequeued element: "<<val<<endl;
    val = dequeue(q);
    cout<<"dequeued element: "<<val<<endl;

    //enqueueing the elements in queue from last
    enqueue(q, 10);
    enqueue(q, 3);
    enqueue(q, 16);
}