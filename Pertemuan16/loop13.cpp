#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float f;
    cout<<"--------------------------------------------------\n";
    cout<<"Celcius    Fahrenheit      Keterangan\n";
    cout<<"--------------------------------------------------\n";
    for(float i=-40;i<=100;i++){
        f = i*9/5+32;
        cout<<"  "<<fixed<<setprecision(0)<<i<<"    :   "<<fixed<<setprecision(1)<<f;
        if(i==-40){
            cout<<"      Cuaca Sangat Dingin Bersalju\n";
        }else if(i>-40 && i<-18){
            cout<<"      Cuaca dingin bersaju\n";
        }else if(i>=-18 && i<0){
            cout<<"      Titik beku air\n";
        }else if(i>=0 && i<10){
            cout<<"     Hari yang dingin\n";
        }else if(i>=10 && i<21){
            cout<<"     Temperatur ruangan\n";
        }else if(i>=21 && i<30){
            cout<<"     Cuaca pantai\n";
        }else if(i>=30 && i<37){
            cout<<"     Temperatur tubuh\n";
        }else if(i>=37 && i<100){
            cout<<"     Air mandi panas\n";
        }else if(i==100){
            cout<<"     Air mendidih\n";
        }
    }
    cout<<"------------------------------";

    return 0;
}