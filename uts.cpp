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

NodeAntrean* headAntrean = nullptr;
NodeLog* headLog = nullptr;
NodeLog* tailLog = nullptr;

string kategori[3] = {"Elektronik", "Pakaian", "Makanan"};

// fungsi bantu
bool isAntreanKosong(){
    return (headAntrean == nullptr);
}

void tambahlog(string aksi){
    NodeLog* newNode = new NodeLog;
    newNode->aktivitas = aksi;
    newNode->next = nullptr;
    newNode->prev = tailLog;

    if (headlLog == nullptr){
        headLog = tailLog = newNode;
    } else{
        tailLog->next = newNode;
        teilLog = newNode;
    }
}

// ngoding well #MALES
void tambahAntrean(int id, string nama){
    NodeAntrean* newNode = new NodeAntrean;
    newNode->data = {id,nama};
    newNode->next = nullptr;

    if (headAntrean == nullptr){
        headAntrean = newNode;
    } else {
        NodeAntrean* temp = headAntrean;
        while (temp->next != nullptr) temp = temp->next;
        temp->next = newNode;
    }
    tambahLog("Menambah barang ke antrean: " + nama);
}
void prosesAntrean(){
    if (isAntreanKosong()) {
        cout << "\n[!] Peringatan: Antrean kosong, tidak ada yang bisa di proses.\n";
        return;
    }

    NodeAntrean* temp = headAntrean;
    string namaTerhapus = temp->data.nama;

    headAntrean = headAntrean->next;
    delete temp;
}
void tampilkanSemuaBarang(){}
void cariBarang(){}
void lihatRiwayat(){}


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