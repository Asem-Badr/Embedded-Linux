#include <iostream> 

class Pair{
    private:
        int first, second;
    public:
        Pair(int first ,int second):first(first),second(second){

        }
        int getFirst(){
            return first;
        }
        int getSecond(){
            return second;
        }
        void setFirst(int first){
            this->first=first;
        }
        void setSecond(int second){
            this->second = second;
        }
        void setPair(int first, int second){
            this->first = first;
            this->second = second;
        }
        void swapPair(){
            int temp = first;
            first = second; 
            second = temp;
        }
        void printPair(){
            std::cout << first << "   " << second<< "\n";
        }

};

int main(){

    Pair pi(2,3);
    pi.printPair();

    Pair Array[] = {Pair(1,2),Pair(2,2),Pair(3,3)};
    for(auto i : Array){
        i.printPair();
    }

    return 0;
}