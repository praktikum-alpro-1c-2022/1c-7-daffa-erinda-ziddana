#include <iostream>

using namespace std;

int main(){

    int baris, kolom, matrik1 [20][20],transpose[20][20], hasil [20][20];

    cout << "Masukan jumlah baris: ";
    cin >> baris;

    cout << "Masukan jumlah kolom: ";
    cin >> kolom;

    cout << "Masukan angka matriks: \n";
    for(int i = 0; i < baris; i++){
        for(int j = 0; j < kolom; j++){
            cin >> matrik1 [i][j];
        }
    }
    for(int i = 0; i < baris; i++){
        for(int j = 0; j < kolom; j++){
            transpose [j][i] = matrik1 [i][j];
        }
    }
    cout << "Hasilnya: \n";
    for(int i = 0; i < kolom; i++){
        for(int j = 0; j < baris; j++){
            cout << transpose [i][j] << "\t";
        }
        cout << endl;
    } 

    return 0;
}