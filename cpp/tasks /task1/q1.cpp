#include <iostream>
using namespace std;

int main(){
    int input = -1 , result =0;
    cout<< "please enter number "<<endl;
    while(input != 0){
        cin>>input;
        result+=input;
        cout<<"please enter another number "<<endl;
    }
    cout <<"result is : "<<result<<endl;
    return 0;
}