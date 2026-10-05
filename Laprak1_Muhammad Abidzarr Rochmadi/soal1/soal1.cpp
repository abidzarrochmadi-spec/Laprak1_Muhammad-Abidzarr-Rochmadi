#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

#define MAX 10

struct mahasiswa {
    string nama;
    string nim;
    float uts;
    float uas;
    float tugas;
    float nilaiAkhir;
};

// FUNGSI untuk menghitung nilai akhir
float hitungNilaiAkhir(float uts, float uas, float tugas) {
    return 0.3f * uts + 0.4f * uas + 0.3f * tugas;
}

int main() {
    mahasiswa data[MAX];
    int n;

    do {
        cout << "Jumlah mahasiswa (1-" << MAX << ") : ";
        cin >> n;
    } while (n < 1 || n > MAX);

    for (int i = 0; i < n; i++) {
        cout << "\nData mahasiswa ke-" << i + 1 << endl;

        cin.ignore(1000, '\n');          // buang sisa enter sebelum getline
        cout << "Nama   : ";
        getline(cin, data[i].nama);
        cout << "NIM    : ";
        getline(cin, data[i].nim);
        cout << "UTS    : ";
        cin >> data[i].uts;
        cout << "UAS    : ";
        cin >> data[i].uas;
        cout << "Tugas  : ";
        cin >> data[i].tugas;

        data[i].nilaiAkhir = hitungNilaiAkhir(data[i].uts, data[i].uas, data[i].tugas);
    }

    cout << "\n=== DATA MAHASISWA ===\n";
    cout << left << setw(5) << "No"
         << setw(20) << "Nama"
         << setw(15) << "NIM"
         << setw(8) << "UTS"
         << setw(8) << "UAS"
         << setw(8) << "Tugas"
         << setw(12) << "Nilai Akhir" << endl;

    for (int i = 0; i < n; i++) {
        cout << left << setw(5) << i + 1
             << setw(20) << data[i].nama
             << setw(15) << data[i].nim
             << setw(8) << data[i].uts
             << setw(8) << data[i].uas
             << setw(8) << data[i].tugas
             << setw(12) << fixed << setprecision(2) << data[i].nilaiAkhir << endl;
    }

    return 0;
}