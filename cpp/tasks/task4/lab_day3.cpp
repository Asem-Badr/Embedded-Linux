#include <iostream>

class DynamicArray {
private:
    int* array;
    int capacity;
    int size;

public:
    DynamicArray() {
        array = new int[8];
        capacity = 8;
        size = 0;
    }
    DynamicArray(int size) {
        array = new int[size];
        capacity = size;
        this->size = 0;
    }
    DynamicArray(int size, int value){
        array = new int[size];
        capacity = size;
        this->size = size;
        for(int i = 0; i < size; i++){
            array[i] = value;
        }
    }
    DynamicArray(int size, int* values){
        array = new int[size];
        capacity = size;
        this->size = size;
        for(int i = 0; i < size; i++){
            array[i] = values[i];
        }
    }
    DynamicArray(const DynamicArray& arr){
        array = new int[arr.capacity];
        capacity = arr.capacity;
        size = arr.size;
        for(int i = 0; i < size; i++){
            array[i] = arr.array[i];
        }
    }
    ~DynamicArray(){
        delete[] array;
    }
    void resize(){
        int*temp = new int [capacity*2];
        for(int i = 0; i < size; i++){
            temp[i] = array[i];
        }
        delete[] array;
        array = temp;
        capacity *= 2;
    }
    void pushback(int value){
        if(size == capacity){
            resize();
        }
        array[size] = value;
        size++;
    }
    int popback(){
        int result = -1;
        if(size > 0){
            result = array[size - 1];
            size--;
        }
        return result;
    }
    void removeAt(int index){
        if(index >= 0 && index < size){
            for(int i = index; i < size - 1; i++){
                array[i] = array[i + 1];
            }
            size--;
        }
    }
    void insertAt(int index, int value){
        if(index >= 0 && index < size){
            if(size == capacity){
                resize();
            }
            for(int i = size; i > index; i--){
                array[i] = array[i - 1];
            }
            array[index] = value;
            size++;
        }
    }
    void insertMiddle(int value){
        if(size == capacity){
            resize();
        }
        int index = size / 2;
        for(int i = size; i > index; i--){
            array[i] = array[i - 1];
        }
        array[index] = value;
        size++;
    }
    void removeMiddle(){
        if(size > 0){
            int index = size / 2;
            for(int i = index; i < size - 1; i++){
                array[i] = array[i + 1];
            }
            size--;
        }
    }
    int getSize(){
        return size;
    }
    void print(){
        for(int i = 0; i < size; i++){
            std::cout << array[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    DynamicArray arr(5, new int[5]{1, 2, 3, 4, 5});
    arr.print();
    arr.pushback(6);
    arr.print();
    arr.popback();
    arr.print();
    arr.removeAt(2);
    arr.print();
    arr.insertAt(2, 3);
    arr.print();
    arr.insertMiddle(7);
    arr.print();
    arr.removeMiddle();
    arr.print();
    return 0;
}