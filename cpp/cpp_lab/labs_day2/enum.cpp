#include <iostream> 

enum class states{
        Bad_Request = 400,
        Not_Found = 404,
        Server_Error = 500,
        Gateway_Timeout = 504,
    };

void printError(states s){
    if(s == states::Bad_Request){
        std::cout<<"bad request "<<"\n";
    }else if(s == states::Gateway_Timeout){
        std::cout<<"gate way timeout  "<<"\n";
    }else if(s == states::Not_Found){
        std::cout<<"server error "<<"\n";
    }else if(s == states::Server_Error){
        std::cout<<"gateway timeout "<<"\n";
    }else{
        std::cout<< "unknown error"<<"\n";
    }
}
int main(){

    states current_state = states::Bad_Request;
    printError(current_state);
    current_state = states::Gateway_Timeout;
    printError(current_state);
    current_state = states::Not_Found;
    printError(current_state);
    current_state = states::Server_Error;
    printError(current_state);


    return 0;
}