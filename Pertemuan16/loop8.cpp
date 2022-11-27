#include <iostream>
using namespace std;

int main(){
    int data = 0;
    int x;
    for(int i=1;i!=9999;i++){
        cout<<"Input Bil : ";
        cin>>x;
        if(x==9999){
            break;
        }else{
        cout<<x<<"\n";
        data = i;
        }
    }
    

    cout<<"Jumlah Angka : "<<data;

    return 0;
}