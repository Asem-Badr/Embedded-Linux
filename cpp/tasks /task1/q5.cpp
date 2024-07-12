#include <iostream> 
using namespace std;
struct employee {
    string name;
    struct dob{
        int year, month,day;
    };
    struct Adress{
        string street, city, country;
    };
    struct contacts{
        string telephone_number, mobile_number, email_address;
    };
    string job;
    struct salary{
        double basic, additional ,reduction, taxes;
    };

};
int main(){


    return 0;
}