#include <iostream>
using namespace std;

void matriksmasuk (int matriks[3][3], char nama[]) {
    cout << "Masukkan anga matriks yang kamu inginkan" << nama << " (3 x 3):\n"
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
        for (int j = 0k j < 3; j++) {
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
  
}
