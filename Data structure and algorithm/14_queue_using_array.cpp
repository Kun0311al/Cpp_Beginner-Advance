#include<iostream>
using namespace std;

struct queue{
    int size;
    int f;
    int r;
    int* arr;
};

//checking weather the queue is full or not
int isfull(struct queue* ary){
    if (ary->r == ary->size-1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
    
}

//check weather the queue is empty or not
int isempty(struct queue* ary){
    if (ary->r == ary->f)
    {
        return 0;
    }
    else
    {
        return 1;
    }
    
}

//for adding new element in the ary or queue
void enqueue(struct queue* ary, int val){
    if (!isfull(ary))
    {
        cout<<"queue is already full\n";
    }
    else
    {
        ary->r++;//increment back pointer
        ary->arr[ary->r] = val;//set value at back pointer
    }
    
}

//for removing the first element from the queue
int dequeue(struct queue* ary){
    int val;//to store deleted value
    if (!isempty(ary))
    {
        cout<<"list is already empty\n";
    }
    else
    {
        ary->f++;//incrementing front pointer
        val = ary->arr[ary->f];//val = deleted value
        return val;
    }
    return 0;
}

int main(){
    struct queue* q = (struct queue*)malloc(sizeof(struct queue));
    q->size = 20;
    q->f = q->r = -1;
    q->arr = (int*)malloc(q->size*sizeof(int));

//adding elements in queue
    enqueue(q, 23);
    enqueue(q, 10);
    enqueue(q, 3);

    int val;//for storing the returned value from dequeue function
    //removing elements from queue
    val = dequeue(q);
    cout<<val;
    cout<<endl;
    val = dequeue(q);
    cout<<val;
    cout<<endl;
    val = dequeue(q);
    cout<<val;
    cout<<endl;
    val = dequeue(q);
    cout<<val;

}