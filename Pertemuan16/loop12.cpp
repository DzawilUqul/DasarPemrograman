#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float f;
    cout<<"------------------------------\n";
    cout<<"Celcius          Fahrenheit\n";
    cout<<"------------------------------\n";
    for(float i=0;i<=100;i++){
        f = i*9/5+32;
        cout<<"  "<<fixed<<setprecision(0)<<i<<"    :             "<<fixed<<setprecision(1)<<f<<"\n";
    }
    cout<<"------------------------------";

    return 0;
}