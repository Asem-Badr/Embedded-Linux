#include<iostream>
#include<math.h>
#include <ctype.h>

namespace MathFunctions{
    void print(double arg){
        std::cout<<"the square root is : "<<sqrt(arg)<<std::endl;
    }
}
namespace StringFunctions{
    void print(char* arg){
        if(arg[0]>='a'&&arg[0]<='z'){
            int i = 0;
            while(arg[i]!='\0'){
                std::cout<<(char)toupper((char)arg[i]);
                i++;
            }
            std::cout<<std::endl;
        }
        else {
            int i = 0;
            while(arg[i]!='\0'){
                std::cout<<(char)tolower((char)arg[i]);
                i++;
            }
            std::cout<<std::endl;
        }
    }
}
namespace ArrayFunctions{
    void print(int *arg , int size){
        for(int i = size-1 ;i >=0 ; i--){
            std::cout<<arg[i]<<" ";
        }
        std::cout<<std::endl;
    }
}

int main(){
    int arr[5] = {1,2,3,4,5};
    char str[] = "HELLO";
    MathFunctions::print(4);
    StringFunctions::print(str);
    ArrayFunctions::print(arr , 5);

    return 0;
}
