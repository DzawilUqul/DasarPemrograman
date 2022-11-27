#include <iostream>
using namespace std;

int main(){
    int sum = 0;
    int x;
    while(x!=9999){
        cout<<"Input Bilangan : ";
        cin>>x;
        if(x==9999){
            break;
        }else{
        cout<<x;
        cout<<endl;
        sum = sum +x;
        }
    }

    cout<<"Jumlah Angka : "<<sum;

    return 0;
}