#include <iostream>

class Time{
    public:
        Time(){
            hour = 0;
            minute = 0;
            second = 0;
        }
        Time(int h, int m, int s){
            hour = h;
            minute = m;
            second = s;
        }
        void print()const{
            std::cout << hour << ":" << minute << ":" << second << std::endl;
        }
        void add_Time(const Time &t1,const Time & t2){
            second = t1.second + t2.second;
            minute = t1.minute + t2.minute;
            hour = t1.hour + t2.hour;
            if(second >= 60){
                second -= 60;
                minute++;
            }
            if(minute >= 60){
                minute -= 60;
                hour++;
            }
        }
    private:
        int hour;
        int minute;
        int second;

};

int main(){
    Time t1(1, 2, 3);
    Time t2(4, 5, 6);
    Time t3;
    t3.add_Time(t1, t2);
    t3.print();
    return 0;
}