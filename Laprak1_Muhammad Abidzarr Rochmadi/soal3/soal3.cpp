#include <iostream>
using namespace std;

#define N 3

// menampilkan isi sebuah array integer 2D
void tampilArray(int arr[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

// menukarkan isi 2 array 2D pada posisi (baris, kolom) tertentu
void tukarArray(int a[N][N], int b[N][N], int baris, int kolom) {
    int temp = a[baris][kolom];
    a[baris][kolom] = b[baris][kolom];
    b[baris][kolom] = temp;
}

// menukarkan isi variabel yang ditunjuk 2 buah pointer
void tukarPointer(int *px, int *py) {
    int temp = *px;
    *px = *py;
    *py = temp;
}

int main() {
    int A[N][N] = { {1, 2, 3},
                    {4, 5, 6},
                    {7, 8, 9} };
    int B[N][N] = { {9, 8, 7},
                    {6, 5, 4},
                    {3, 2, 1} };
    int *p1, *p2;

    cout << "Array A awal:" << endl;
    tampilArray(A);
    cout << "\nArray B awal:" << endl;
    tampilArray(B);

    // tukar isi A dan B pada baris 1, kolom 2
    tukarArray(A, B, 1, 2);
    cout << "\n=== Setelah tukar array posisi [1][2] ===" << endl;
    cout << "Array A:" << endl;
    tampilArray(A);
    cout << "\nArray B:" << endl;
    tampilArray(B);

    // tukar isi variabel lewat pointer
    p1 = &A[0][0];
    p2 = &B[0][0];
    cout << "\n=== Tukar lewat pointer ===" << endl;
    cout << "Sebelum : *p1 = " << *p1 << ", *p2 = " << *p2 << endl;
    tukarPointer(p1, p2);
    cout << "Sesudah : *p1 = " << *p1 << ", *p2 = " << *p2 << endl;

    cout << "\nArray A akhir:" << endl;
    tampilArray(A);
    cout << "\nArray B akhir:" << endl;
    tampilArray(B);

    return 0;
}