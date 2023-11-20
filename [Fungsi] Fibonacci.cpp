#include <iostream>

using namespace std;

void Fibonacci (int n, int n1 = 0, int n2 = 1, int fn = 0){

    cout << "Jumlah Deret Fibonacci: ";

    for(int i = 1; i <= n; i++){
        if (i == 1){
            cout << n1 << " ";
            continue;
        }
        if (i == 2) {
            cout << n2 << " ";
            continue;
        }
        fn = n1 + n2;
        n1 = n2;
        n2 = fn;

        cout << fn << " ";
    }
    cout << endl;
}

int main (){
    int n;
    cout << "---------------------------------\n";
    cout << "    Program Deret Fibonacci      \n";
    cout << "---------------------------------\n\n";
    cout << "Masukan Jumlah Deret Fibonacci: ";
    cin >> n;
    cout << endl;

    Fibonacci (n);
    cout << "\n";
    cout << "---------------------------------\n\n";
        return 0;
}
