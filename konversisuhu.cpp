#include <iostream>
using namespace std;

void konversi(double cF, double cR) {
    cout << "Fahrenheit: " << cF * 9/5 + 32 << endl;
    cout << "Reamur: " << cR * 4/5 << endl;
}

int main() {
    konversi(30, 2);
    return 0;
}