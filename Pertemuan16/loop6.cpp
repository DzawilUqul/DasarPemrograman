#include <iostream>
using namespace std;

int main(){
    int j;
    int max;
    int min;

    cout<<"Program ini akan berhenti jika anda menginputkan angka -99\n";
    for(int i=0; i!=-99; i++){
        cout<<"Masukkan Nilai Anda : ";
        cin>>j;
            if(j==-99){
                cout<<"Keluar Karena Break";
                break;
            }

        if(i==0){
            max=j;
            min=j;
        }else if(j>max){
            max = j;
        }else if(j<min){
            min = j;
        }
    }

    cout<<"\n\nMax = "<<max;
    cout<<"\n\nMin = "<<min;
    
    return 0;
}