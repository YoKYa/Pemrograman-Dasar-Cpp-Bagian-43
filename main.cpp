#include <iostream>

using namespace std;

int main(){
    system("cls");

    // Casting Operator
    // Yaitu Sebuah Operator untuk mengubah sebuah Tipe Data

    // Deklarasi Variabel
    int A = 1;
    int B = 2;
    float C = 3.33f;
    char D = 'f';

    cout << A + B << endl; // int + int
    cout << A + C << endl; // int + float
    cout << A + D << endl; // int + char

    cout << endl;

    // Casting Operator
    cout << A + B << endl; // int + int
    cout << A + (int)C << endl; // int + float (di ubah int)
    cout << (char)(B + D) << endl; // int + char (diubah jadi int)



    cin.get();
    return 0;     
}