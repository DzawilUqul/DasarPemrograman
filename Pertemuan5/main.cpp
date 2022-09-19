#include <iostream>

using namespace std;

int main()
{

    int r;
    float pi = 3.14;
    float luasLing;

    cout<<"Program penghitung luas lingkaran"<<endl;
    cout<<"Masukkan jari-jari : ";
    cin>>r;

    luasLing = r*pi;
    cout<<"Luas lingkaran : "<<luasLing;


    int p;
    int l;
    cout<<"\n\n\nProgram penghitung luas Persegi Panjang"<<endl;

    cout<<"Masukkan panjang : ";
    cin>>p;

    cout<<"Masukkan lebar : ";
    cin>>l;

    float luasPers = p*l;
    cout<<"Luas persegi panjang : ";
    cout<<luasPers;


    cin.get();
    return 0;
}
