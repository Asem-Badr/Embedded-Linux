#include <iostream>
template <typename key_type , typename value_type>
class KeyValuePair{
    private:
        key_type key;
        value_type value;
    public:
    KeyValuePair(key_type key , value_type value):key(key),value(value){

    }
    void setKey(key_type key){
        this->key = key;
    }
    void setValue(value_type value){
        this->value = value;
    }
    key_type getKey(){
        return key;
    }
    value_type getValue(){
        return value;
    }
    void print_pair(){
        std::cout<<key << " : "<<value<<"\n";
    }

};
int main(){
    int key,value;
    KeyValuePair<int , int> test_pair(2,3) ;
    test_pair.print_pair();
    key = test_pair.getKey();
    std::cout<<"the key is : "<<key<<"\n";
    value = test_pair.getValue();
    std::cout<<"the value is : "<<value<<"\n";
    test_pair.setKey(4);
    test_pair.setValue(5);
    key = test_pair.getKey();
    std::cout<<"the key is : "<<key<<"\n";
    value = test_pair.getValue();
    std::cout<<"the value is : "<<value<<"\n";

    return 0;
}