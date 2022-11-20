#include <iostream>
using namespace std;

int main(){
    float jumlah = 0;
    int data;
    for(int i=1;i<=20;i++){
        cout<<i<<endl;
        jumlah = jumlah + i;
        data = i;
    }

    float rata2 = jumlah/data;
    cout<<"\nJumlah = "<<jumlah;
    cout<<"\nRata - rata = "<<rata2;
    return 0;
}