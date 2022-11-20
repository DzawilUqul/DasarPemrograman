#include <iostream>
using namespace std;
int main(){
    int i;
    int j;
    cout<<"Program ini akan berhenti jika anda menginputkan angka -99\n";
    while(i!=-99){
        cout<<"Masukkan Nilai Anda : ";
        cin>>j;
        if(j==-99){
            cout<<"Keluar Karena Break";
            break;
        }
    }
    
    return 0;
}