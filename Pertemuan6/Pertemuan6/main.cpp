#include <iostream>

using namespace std;

int main()
{
    int jur;
    int sems;

    cout<<"===Daftar Jurusan==="<<endl;
    cout<<"1. Teknik Informatika"<<endl;
    cout<<"2. Sistem Informasi"<<endl;
    cout<<"3. Desain Komunikasi Visual"<<endl;
    cout<<"Masukkan Jurusan Anda (1/2/3): ";
    cin>>jur;

    cout<<"\nKategori Mahasiswa==="<<endl;
    cout<<"1. Semester 1-2 = Freshman"<<endl;
    cout<<"2. Semester 3-4 = Sophomore"<<endl;
    cout<<"3. Semester 5-6 = Junior"<<endl;
    cout<<"4. Semester 7-8 = Senior"<<endl;
    cout<<"Masukkan Semester anda (1/2/3/4): ";
    cin>>sems;

    if(jur==1){
        cout<<"\nJurusan anda adalah Teknik Informatika";
    }

    if(jur==2){
        cout<<"\nJurusan anda adalah Sistem Informasi";
    }

    if(jur==3){
        cout<<"\nJurusan anda adalah Desain Komunikasi Visual";
    }

    if(sems==1){
        cout<<"\nAnda dalam kategori Freshman Year";
    }

    if(sems==2){
        cout<<"\nAnda dalam kategori Sophomore Year";
    }

    if(sems==3){
        cout<<"\nAnda dalam kategori Junior Year";
    }

    if(sems==4){
        cout<<"\nAnda dalam kategori Senior 2Year";
    }

    cin.get();
    return 0;
}
