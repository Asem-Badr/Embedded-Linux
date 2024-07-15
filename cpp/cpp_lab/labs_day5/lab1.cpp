#include <iostream>

int main(){
    std::string text = "The cycle of life is a cycle of cycles.";
    int pos = 0;
    while( (pos = text.find("cycle"))!=std::string::npos){
        text.replace(pos,5,"circle");
    }
    std::cout << text<<std::endl;
    pos = text.find("circle");
    text.insert(pos-1," great");
    pos = text.find("circle",pos+6);
    text.insert(pos-1,"never-ending");
    std::cout << text<<std::endl;
    return 0;
}