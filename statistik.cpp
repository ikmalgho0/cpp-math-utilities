#include <iostream>
using namespace std;

double rataRata(int nilai[], int jumlah) {
    int total = 0;

    for (int i = 0; i < jumlah; i++) {
        total += nilai[i];
    }

    return (double)total / jumlah;
}

int nilaiMax(int nilai[], int jumlah) {
    int max = nilai[0];

    for (int i = 1; i < jumlah; i++) {
        if (nilai[i] > max) {
            max = nilai[i];
        }
    }

    return max;
}

void cetakLaporan(int nilai[], int jumlah) {
    cout << "\n===== LAPORAN NILAI =====" << endl;
    cout << "Nilai rata-rata: " << rataRata(nilai, jumlah) << endl;
    cout << "Nilai tertinggi: " << nilaiMax(nilai, jumlah) << endl;
}

int main() {
    int jumlah;
    
    cout << "Masukkan jumlah nilai: ";
    cin >> jumlah;

    int nilai[jumlah];

    for (int i = 0; i < jumlah; i++) {
        cout << "Masukkan nilai ke-" << i + 1 << ": ";
        cin >> nilai[i];
    }

    cetakLaporan(nilai, jumlah);

    return 0;
}