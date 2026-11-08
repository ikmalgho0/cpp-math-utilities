# cpp-math-utilities

A collection of basic C++ utility programs implementing modular programming principles using functions and procedures (Pemrograman Lanjut - UPN "Veteran" Jawa Timur).

## 📌 Features & Program List

Repository ini berisi 4 program utama yang menerapkan pemisahan logika perhitungan (*fungsi*) dan tampilan output (*prosedur*):

1. **`konversisuhu.cpp`**
   - Mengisi logika perhitungan konversi suhu dari Celcius ke Fahrenheit dan Reamur menggunakan fungsi bernilai balik.
   - Menggunakan prosedur khusus untuk mencetak ringkasan hasil konversi suhu.

2. **`validasi.cpp`**
   - Memvalidasi format/keabsahan NIM mahasiswa melalui fungsi `isValidNIM()`.
   - Menampilkan informasi biodata mahasiswa menggunakan prosedur `tampilkanBiodata()`.

3. **`kalkulatorfungsi.cpp`**
   - Kalkulator aritmatika dasar (`+`, `-`, `*`, `/`) di mana setiap operasi matematika diisolasi menjadi fungsi terpisah.
   - Dipanggil secara modular berdasarkan pilihan menu menggunakan struktur `switch-case`.

4. **`statistik.cpp`**
   - Menghitung statistik nilai dasar melalui fungsi `rataRata()`, `nilaiMaks()`, dan `nilaiMin()`.
   - Menggunakan prosedur `cetakLaporan()` untuk mengompilasi seluruh hasil fungsi ke dalam tampilan laporan ringkas.

## 🛠️ Compilation & Execution

Pastikan kamu memiliki compiler C++ (seperti `g++`) yang sudah terkonfigurasi pada sistem.

### Langkah Pengujian

Jalankan perintah berikut di terminal/PowerShell dari root direktori proyek:

```bash
# 1. Buat folder output jika belum ada (opsional)
mkdir -p output

# 2. Kompilasi program (contoh: statistik.cpp)
g++ statistik.cpp -o output/statistik

# 3. Jalankan program
# Linux/macOS:
./output/statistik

# Windows (PowerShell/CMD):
.\output\statistik.exe