#include <iostream>
using namespace std;

// variavel global
int angka;
int pilihan;

//fungsi cek prima
bool isPrima(int n) {
    if (n < 2) return false;
    int i = 2;
    while (i * i <= n) {
        if (n % i == 0) return false;
        i++;
    }
    return true;
}

// fungsi cek fibonacci
bool isFibonacci(int n) {
    int a = 0, b = 1;
    if (n == a || n == b) return true;
    int c = a + b;
    while (c <= n) {
        if (c == n) return true;
        a = b;
        b = c;
        c = a + b;

    }
    return false;
     
}

// prosedur tampilkan menu
void tampilMenu() {
    cout<< "\n--- MENU CEK BILANGAN ---" << endl;
    cout<< "1. Cek Bilangann Prima" << endl;
    cout<< "2. Cek Bilangan Fibonacci" << endl;
    cout<< "0. keluar" << endl;
    cout << "Pilih menu: ";

}

// prosedur input user
void inputUser() {
    cout << "Masukkan angka yang mau dicek: ";
    cin >> angka;

}

// prosedur outpuut hasil prima
void tampilkanHasilPrima(bool hasil) {
    if(hasil) cout << "=> " << angka << " adalah bilangan prima!" << endl;
    else  cout << "=> " << angka << " bukan bilangan prima. " << endl;

}