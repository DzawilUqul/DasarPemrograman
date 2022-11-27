#include <iostream>
using namespace std;

int main(){
    int batasLoop =10;
    int batas;
    cout<<"Input : ";
    cin>>batas;
    for(int i=1;i<=batasLoop;i++){
            cout<<i;
            cout <<" x"<<" 7 = "<<i*batas<<"\n";
    }

    return 0;
}