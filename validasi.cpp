#include <iostream>
#include <string>
using namespace std;

bool isValidNIM(long long nim) {
    if (nim > 0) {
        return true;
    }
    return false;
}

void tampilkanBiodata(string nama, long long nim) {
    if (isValidNIM(nim)) {
        cout << "Nama: " << nama << endl;
        cout << "NIM: " << nim << endl;
    } else {
        cout << "ERROR: NIM tidak valid, biodata tidak dapat ditampilkan" << endl;
    }
    
}

int main() {
    string nama = "Ikmal Ghozali";
    long long nim = 25081010114;

    tampilkanBiodata(nama, nim);

    return 0;
}
