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





int main(){
  
}
