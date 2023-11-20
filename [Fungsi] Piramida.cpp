#include <iostream>

using namespace std;

void Piramida(){

    int a;
    cout << "Masukan Tinggi Segitiga: ";
    cin >> a;
    cout << endl;
    cout << "-----------------------------------\n\n";
     for (int i = 1; i <= a; i++){
        for (int j = 1; j <= a - i; j++){
            cout << "  ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "*" << "   ";
        }
        cout << endl;
    }
}

int main () {
    cout << "-----------------------------------\n";
    cout << "     Membuat Piramida Bintang      \n";
    cout << "-----------------------------------\n\n";
    Piramida();
    cout << "\n";
    cout << "-----------------------------------\n\n";
        return 0;
}
