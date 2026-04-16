#include <iostream>
using namespace std;

int element[10];
int nPanjang;
int x;

void input()
{
    while(true)
    {
        cout << "masukkan banyaknya elemen pada array(maksimal 10) : " ;
        cin >> nPanjang;

        if (nPanjang <= 10)
        {
            break;
        }
        else{
            cout << "\n[!] jumlah elemen tidak boleh lebidh dari 10. silahkan coba lagi.\n";
        }
    }
    
    cout << "\n================================\n";
    cout << "        masukan elemen array      \n";
    cout << "\n================================\n";
    cout << endl;
    
}