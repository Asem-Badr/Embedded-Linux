#include <iostream>
using namespace std;

int main(){
    int input ,seconds=0, minutes=0, hours=0 ,remainder;
    cout<<"input seconds : ";
    cin>>input;
    hours = input/(60*60);
    remainder = input - hours*(60*60);
    minutes = remainder/(60);
    seconds = remainder-minutes*60;
    cout<<"H:M:S - "<<hours<<':'<<minutes<<':'<<seconds<<endl;

    return 0;

}