#include <iostream>

using namespace std;

int main()
{
    int f1 = 0;
    int f2 = 1;
    int f = f1 + f2;
    int n;

    cout << "Masukkan n : ";
    cin >> n;

    cout << f << " ";
    for(int i = f; i < n; i++){
        f = f1 + f2;
        f1 = f2;
        f2 = f;

        if(f>100){
            return 0;
        }

        cout << f << " ";
    }

    return 0;
}
