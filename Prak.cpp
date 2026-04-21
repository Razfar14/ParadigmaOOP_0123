#include <iostream>
using namespace std;

class barang{
    public:
    string nama;
    int jumlah;
    string kategori;
    string tanggalProduksi;

    void printSpek(){
        cout << "Nama Barang: " << nama << endl;
        cout << "Jumlah: " << jumlah << endl;
        cout << "Kategori: " << kategori << endl;
        cout << "Tanggal Produksi: " << tanggalProduksi << endl;
    };
};

int main(){
    barang elektronik;
    barang nonelektronik;

    elektronik.nama = "TV";
    elektronik.jumlah = 10;
    elektronik.kategori = "Elektronik";
    elektronik.tanggalProduksi = "2024-01-01";

    nonelektronik.nama = "Meja";
    nonelektronik.jumlah = 5;   
    nonelektronik.kategori = "Non Elektronik";
    nonelektronik.tanggalProduksi = "2024-02-01";

    elektronik.printSpek();
    nonelektronik.printSpek();
}