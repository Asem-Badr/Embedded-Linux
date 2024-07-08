#include <iostream>
#include <stdlib.h>
using namespace std;

struct vector_type {
    int capacity;
    int size;
    int *vector;
};

void init_vector(struct vector_type *v);
void push_vector(struct vector_type *v,int value);
void insert_vector(struct vector_type *v, int index, int value);
void delete_vector(struct vector_type *v, int index);
void print_vector(struct vector_type *v);
void print_index(int index);
void increase_size(struct vector_type *v);
int main(){
    struct vector_type vector;
    init_vector(&vector);
    push_vector(&vector,1);
    push_vector(&vector,2);
    push_vector(&vector,3);
    print_vector(&vector);
    insert_vector(&vector,1,4);
    print_vector(&vector);
    delete_vector(&vector,1);
    print_vector(&vector);

    cout<<"compiled successfully"<<endl;
    return 0;
}
void init_vector(struct vector_type *v){
    v->size = 8;
    v->capacity = 0;
    v->vector = (int*)malloc(sizeof(int)*8);
}
void push_vector(struct vector_type *v,int value){
    v->capacity < v->size;
    v->vector[v->capacity] = value;
    v->capacity++;
    if(v->capacity == v->size){
        increase_size(v);
    }
}
void insert_vector(struct vector_type *v, int index , int value){
    if(index > v->capacity)
    {
        cout<< "out of bounds"<<endl;
    }else{
        // Shift the array elements to make space for the new element
        for(int i = v->capacity; i > index; i--){
            v->vector[i] = v->vector[i-1];
        }
        // Insert the new element at the specified index
        v->vector[index] = value;
        v->capacity++;
    }
}
void delete_vector(struct vector_type *v, int index){
    if(index >= v->capacity || index < 0)
    {
        cout<< "out of bounds"<<endl;
    }else{
        // Shift the array elements one place backward
        for(int i = index; i < v->capacity - 1; i++){
            v->vector[i] = v->vector[i+1];
        }
        v->capacity--;
        // Release memory if necessary
        if(v->size - v->capacity >= 8){
            v->vector = (int*)realloc(v->vector, sizeof(int) * (v->size - 8));
            v->size -= 8;
        }
    }
}
void print_vector(struct vector_type *v){
    for(int i=0 ;i<v->capacity;i++){
        cout<<v->vector[i]<<" ";
    }
    cout<<endl;
}
void increase_size(struct vector_type *v){
    realloc(v->vector,v->size+8);//should check for null returns 
    v->size +=8;
}