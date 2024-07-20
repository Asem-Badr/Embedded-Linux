#include <iostream>

template <typename T>
class DynamicArray {
private:
    T* array;
    int capacity;
    int size;

public:
    DynamicArray() {
        array = new T[8];
        capacity = 8;
        size = 0;
    }
    DynamicArray(int size) {
        array = new T[size];
        capacity = size;
        this->size = 0;
    }
    DynamicArray(int size, T value){
        array = new T[size];
        capacity = size;
        this->size = size;
        for(int i = 0; i < size; i++){
            array[i] = value;
        }
    }
    DynamicArray(int size, T* values){
        array = new T[size];
        capacity = size;
        this->size = size;
        for(int i = 0; i < size; i++){
            array[i] = values[i];
        }
    }
    DynamicArray(const DynamicArray& arr){
        array = new T[arr.capacity];
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
        T*temp = new T [capacity*2];
        for(int i = 0; i < size; i++){
            temp[i] = array[i];
        }
        delete[] array;
        array = temp;
        capacity *= 2;
    }
    void pushback(T value){
        if(size == capacity){
            resize();
        }
        array[size] = value;
        size++;
    }
    T popback(){
        T result = -1;
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
    void insertAt(int index, T value){
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
    void insertMiddle(T value){
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
    DynamicArray<char> arr = DynamicArray<char>(5, new char[5]{'A', 'B', 'C', 'D', 'E'});
    arr.print();
    arr.pushback('F');
    arr.print();
    arr.popback();
    arr.print();
    arr.removeAt(2);
    arr.print();
    arr.insertAt(2, 'C');
    arr.print();
    arr.insertMiddle('X');
    arr.print();
    arr.removeMiddle();
    arr.print();
    return 0;
}