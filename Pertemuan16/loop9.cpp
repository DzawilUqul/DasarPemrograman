#include <iostream>
using namespace std;

int main(){
    int sum;
    int data;
    int x;
    for(int i=1;i!=9999;i++){
        cout<<"Input Bil : ";
        cin>>x;
        if(x==9999){
            break;
        }else{
        cout<<x<<"\n";
        sum = sum + x;
        data = i;
        }
    }

    cout<<"Jumlah angka : "<<sum;
    cout<<"\nJumlah cacah angka : " <<data;


    return 0;
}