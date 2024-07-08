#include <iostream>
using namespace std;
#include <cmath>

int main(){
    double population = 162100;
    const double growth_rate = 0.065;
    int years = 0;
    while(population<1000000){
        population = population*pow(1+growth_rate,1);
        cout<<population<<endl;
        years++;
    }
    cout << "years needed is : " << years<<endl;

    cout << endl<<endl<<"withou loops :"<<endl<<endl;
    //from the formula
    years = ceil(log(1000000 / 162100) /log(1 + growth_rate));
    cout << "years needed is : " << years << endl;
    return 0;
}