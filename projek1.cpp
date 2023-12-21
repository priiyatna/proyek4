#include <iostream>
#include <string>

using namespace std;

const int MAX_BUKU = 10;

struct Buku {
    string judul;
    string penulis;
    string penerbit;
    string jumlahalaman;
    string jenisbuku;
    string isbn;
    int tahunTerbit;
};

void tampilkanDaftarBuku(const Buku daftarBuku[], int jumlahBuku) {
    cout << "\nDaftar Buku yang Disimpan:\n";
    for (int i = 0; i < jumlahBuku; ++i) {
        cout << "ID: " << i + 1 << endl; // Menampilkan ID buku
        cout << "Judul: " << daftarBuku[i].judul << endl;
        cout << "Penulis: " << daftarBuku[i].penulis << endl;
        cout << "penerbit: " << daftarBuku[i].penerbit << endl;
        cout << "jumlah halaman: " << daftarBuku[i].jumlahalaman << endl;
        cout << "jenis buku: " << daftarBuku[i].jenisbuku << endl;
        cout << "ISBN: " << daftarBuku[i].isbn << endl;
        cout << "Tahun Terbit: " << daftarBuku[i].tahunTerbit << endl << endl;

    }
   
}

int main() {
    Buku daftarBuku[MAX_BUKU];
    int jumlahBuku = 0;

    int pilihan;

    do {
    	cout <<"                 ======================="<<endl;
    	cout <<"                    PROGRAM DATA BUKU   "<<endl;
    	cout <<"                 ======================="<<endl;
        cout <<"                        Menu Utama" << endl;
        cout <<endl<<"	         ==== 1.Tambah Buku ====" << endl;
        cout <<endl<<"	       ==== 2.Tampilkan Daftar Buku ====" << endl;
        cout <<endl<<"              ==== 3. Update Informasi Buku ====" << endl;
        cout <<endl<<"                 ==== 4. Hapus Buku ====" << endl;
        cout <<endl<<"                   ==== 5. Keluar ====" << endl;
        cout << "Pilih opsi (1-5): ";
        cin >> pilihan;

