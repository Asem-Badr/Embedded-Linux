#include <iostream>
#include <typeinfo>
enum class types{
    int_var = 1 ,
    doubule_var,
    char_var
};
class VPointerArray{
    private: 
    int size;
    void* array_of_void_pointers;
    public:
    VPointerArray(int size){
        array_of_void_pointers = new void*[size];
        this->size = size;
    }
    ~VPointerArray(){

    }
    void setValue(void *value, int index ,types my_type){
        
    }
    void getValue(int index){

    }
    int getSize(){
        return size;
    }
    std::string getDataType(int index){
        // std::cout<<typeid(*array_of_void_pointers(index)).name;
    }
};

int main(){


    return 0;
}