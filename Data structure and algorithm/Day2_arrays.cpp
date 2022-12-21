#include<iostream>
using namespace std;

//structure of array
struct array_1{
    int array_size;
    int array_used;
    int* ptr;
};

//function who takes address of element and total size and used size
void create_array(struct array_1* a, int size_t, int size_u){
    //set total size and used size
    (*a).array_size = size_t;
    (*a).array_used = size_u;
    //set pointer at the heap allocated memory
    (*a).ptr = new int(size_t * sizeof(int));

    /*alternative for this is
    a->array_used = size_u;
    a->array_size = size_t;
    a->ptr = new int(size_t * sizeof(int));
    */
}


int main(){
    struct array_1 a1;//create a1 object of structure
    create_array(&a1, 50, 15);//call create array function
}