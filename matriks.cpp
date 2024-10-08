#include <iostream>
using namespace std;

void matriksmasuk (int matriks[3][3], char nama[]) {
    cout << "Masukkan anga matriks yang kamu inginkan" << nama << " (3 x 3):\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "angka [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriks[i][j];
        }
    }
}

void matrikskeluar (int matriks[3][3], char nama[]) {
    cout << "Matriks " << nama << ":\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matriks[i][j];
        }
        cout << endl;
    }
}

void tambah(int matriks1[3][3], int matriks2[3][3], int hasil[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            hasil[i][j] = matriks1[i][j] + matriks2[i][j];
        }
    }
}

void kali(int matriks1[3][3], int matriks2[3][3], int hasil[3][3]) {
   for (int i = 0; i < 3; i++) {
       for (int j = 0; j < 3; j++) {
           hasil[i][j] = 0;
           for (int k = 0; k < 3; k++) {
                hasil[i][j] += matriks1[i][k] * matriks2[k][j];
           }
       }
   }
}

void transpose(int matriks[3][3], int hasil [3][3]) {
   for (int i = 0; i < 3; i++) {
       for (int j = 0; j < 3; j++) {
           hasil[j][i] = matriks[i][j];
       }
   }
}

int main(){
    int matriks1[3][3], matriks2[3][3];
    int jumlah[3][3], perkalian[3][3], transposee[3][3];
    char nama[] = "pertama";
    char nama2[] = "kedua";


    cout << "Selamat Datang di Kalkulator Matriks 3*3 !\n\n";

    matriksmasuk(matriks1, nama);
    matriksmasuk(matriks2, nama2);
    matrikskeluar(matriks1, nama);
    matrikskeluar(matriks2, nama2);
    tambah(matriks1, matriks2, jumlah);
    matrikskeluar(jumlah, "hasil tambah");
    kali(matriks1, matriks2, perkalian);
    matrikskeluar(perkalian, "hasil kali");
    transpose (matriks1, transposee);
    matrikskeluar (transposee, "transpose matriks pertama");
    transpose (matriks2, transposee);
    matrikskeluar (transposee, "transpose matriks kedua");

        return 0;
}
