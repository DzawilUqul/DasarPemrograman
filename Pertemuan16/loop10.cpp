#include <iostream>
using namespace std;

int main(){
    int batasLoop = 7;
    int batasAngka = 10;
    for(int i=1;i<=batasLoop;i++){
        cout<<"Looping ke-"<<i<<"\n";
        for(int j=1;j<=batasAngka;j++){
            cout<<"-angka "<<j<<"-\n";
        }
    }
    return 0;
}