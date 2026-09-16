#include <iostream>
using namespace std;

//Fungsi untuk mengembalikan hasil penjumlahan dua bilangan
double tambah(double a, double b) {
    return a + b;
}

//Fungsi untuk mengembalikan hasil pengurangan dua bilangan
double kurang(double a, double b) {
    return a - b;
}

//Fungsi untuk mengembalikan hasil perkalian dua bilangan
double kali(double a, double b) {
    return a * b;
}

//Fungsi untuk mengembalikan hasil pembagian dua bilangan
double bagi(double a, double b) {
    return a / b;
}

//Fungsi utama tempat alur program dan menu kalkulator dijalankan
int main() {
    double bil1, bil2;
    char op, ulang;

    cout << "\n=== KALKULATOR BERBASIS FUNGSI ===\n" << endl;
    do {
        cout << "Masukkan bilangan pertama: ";
        cin >> bil1;
        cout << "Pilih operasi (+,-,*,/): ";
        cin >> op;
        cout << "Masukkan bilangan kedua: ";
        cin >> bil2;

        switch (op) {
            case '+':
                cout << "hasil: " << tambah(bil1, bil2) << endl;
                break;
            case '-':
                cout << "hasil: " << kurang(bil1, bil2) << endl;
                break;
            case '*':
                cout << "hasil: " << kali(bil1, bil2) << endl;
                break;
            case '/':
                if (bil2 == 0) {
                    cout << "error: pembagian dengan nol tidak terdefinisi!" << endl;
                }
                else {
                    cout << "hasil: " << bagi(bil1, bil2) << endl;
                }
                break;
            default:
                cout << "operasi tidak valid!" << endl;
                break;
        }

        cout << "lanjut? (y/n): ";
        cin >> ulang;
        cout << endl;

    } while (ulang == 'y' || ulang == 'Y');

    return 0;
}