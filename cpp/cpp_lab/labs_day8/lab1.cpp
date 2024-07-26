#include <iostream>
#include <thread>
#include <chrono>
void beep(int interval){
    while(true){
        
        std::cout << '\a' << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(interval));
    }
    
}
int main(){
    std::thread t1(beep,3);
    std::cout << "Press Enter to stop the beebing" << std::endl;
    std::cin.get();
    t1.detach();

    return 0;
}