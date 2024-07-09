#include <iostream> 
template <typename T , typename U>
class Pair{
    private:
        T first, second;
    public:
        Pair(T first ,U second):first(first),second(second){

        }
        T getFirst(){
            return first;
        }
        U getSecond(){
            return second;
        }
        void setFirst(int first){
            this->first=first;
        }
        void setSecond(U second){
            this->second = second;
        }
        void setPair(T first, U second){
            this->first = first;
            this->second = second;
        }
        // void swapPair(){
        //     T temp = first;
        //     first = second; 
        //     second = temp;
        // }
        void printPair(){
            std::cout << first << "   " << second<< "\n";
        }

};

int main(){

    Pair pi(2,3);
    pi.printPair();

    Pair<int,int> Array[] = {Pair(1,2),Pair(2,2),Pair(3,3)};
    for(auto i : Array){
        i.printPair();
    }

    return 0;
}