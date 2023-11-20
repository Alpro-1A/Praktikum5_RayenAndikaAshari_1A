#include <iostream>

using namespace std;

    void BilanganGanjil (int batas, int & TotalGanjil){
    cout << "Bilangan Ganjil: ";
    for (int a = 1 ; a <= batas ; a += 2){
        cout << a << " ";
        TotalGanjil += a;
        }
    }
    void BilanganGenap (int batas, int & TotalGenap){
    cout << "Bilangan Genap : ";
    for (int b = 2 ; b <= batas ; b += 2){
        cout << b << " ";
        TotalGenap += b;
        }
    }
    void BilanganPrima (int batas, int & TotalPrima){
    cout << "Bilangan Prima : ";
    for (int c = 2 ; c <= batas ; ++c){
        int Bprima = 1;
        for (int d = 2; d * d <= c; ++d){
            if (c % d == 0){
                Bprima = 0;
                break;
            }
        }
        if (Bprima == 1){
        cout << c << " ";
        TotalPrima += c;
        }
    }
}
    void FaktorGanjil (int TotalGanjil){
    cout << "Faktor Bilangan Ganjil: ";
    for (int x = 1; x <= TotalGanjil; x++) {
        if (TotalGanjil % x == 0) {
            cout << x << " ";
        }
    }
}
    void FaktorGenap (int TotalGenap){
    cout << "Faktor Bilangan Genap : ";
    for (int y = 1; y <= TotalGenap; y++) {
        if (TotalGenap % y == 0) {
            cout << y << " ";
        }
    }
}
    void FaktorPrima (int TotalPrima){
    cout << "Faktor Bilangan Prima : ";
    for (int z = 1; z <= TotalPrima; z++) {
        if (TotalPrima % z == 0) {
            cout << z << " ";
        }
    }
}
    int main(){
    int batas;
    int TotalGanjil = 0, TotalGenap = 0, TotalPrima = 0;

    cout << "-----------------------------------------------------------\n";
    cout << "         Menghitung Bilangan Ganjil, Genap, Prima           \n";
    cout << "-----------------------------------------------------------\n\n";
    cout << "Masukan Batas Bilangan : ";
    cin >> batas;
    cout << "\n";
    cout << "------------------- [ Bilangannya ] -----------------------\n\n";
    BilanganGanjil(batas, TotalGanjil);
    cout << "\n";
    BilanganGenap(batas, TotalGenap);
    cout << "\n";
    BilanganPrima(batas, TotalPrima);
    cout << "\n\n";
    cout << "--------------------- [ Jumlah ] --------------------------\n\n";
    cout << "Jumlah Bilangan Ganjil: " << TotalGanjil << endl;
    cout << "Jumlah Bilangan Genap : " << TotalGenap << endl;
    cout << "Jumlah Bilangan Prima : " << TotalPrima << endl;
    cout << "\n";
    cout << "----------------- [ Faktor-Faktor ] -----------------------\n\n";
    FaktorGanjil(TotalGanjil);
    cout << "\n";
    FaktorGenap(TotalGenap);
    cout << "\n";
    FaktorPrima(TotalPrima);
    cout << "\n\n";
    cout << "-----------------------------------------------------------\n\n";
    return 0;

}
