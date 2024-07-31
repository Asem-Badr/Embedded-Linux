#include <iostream>
#include <atomic>
#include <thread>
class SpinLock{
    private: 
        std::atomic_flag flag;
    public: 
        void lock(){
            flag.test_and_set(std::memory_order_acquire);
        }
        void unlock(){
            flag.clear(std::memory_order_release);
        }
};

void multiply(int &shared_variable){
    SpinLock spinlock;
    spinlock.lock();
    shared_variable *=2;
    spinlock.unlock();
}
void divide(int &shared_variable){
    SpinLock spinlock;
    spinlock.lock();
    shared_variable /=2;
    spinlock.unlock();
}
int main(){

    int shared_variable = 100;
    
    std::thread t1(multiply, std::ref(shared_variable));
    std::thread t2(divide, std::ref(shared_variable));

    t1.join();
    t2.join();
    std::cout<<"Shared variable: "<<shared_variable<<std::endl;
    return 0;
}