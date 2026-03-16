#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// --- STRUKTUR DATA --- well
struct Barang {
    int id;
    string nama;
};

// Single Linked List untuk Antrean ya gaes ya
struct NodeAntrean {
    Barang data;
    NodeAntrean* next;
};

// Double Linked List untuk Riwayat ya gaes ya
struct NodeLog {
    string aktivitas;
    NodeLog* next;
    NodeLog* prev;
};

// ngoding well #MALES
void tambahAntrean(){}
void prosesAntrean(){}
void tampilkanSemuaBarang(){}
void cariBarang(){}
void lihatRiwayat(){}
void tambahlog(){}

int main(){
    cout << "1. Tambah barang" << endl;
    cout << "2. Hapus barang" << endl;
    cout << "3. Tampilkan semua barang" << endl;
    cout << "4. Cari barang" << endl;
    cout << "5. Riwayat barang" << endl;
    cout << "6. Keluar" << endl;
    cout << "Pilihan: ";

    return 0;
}