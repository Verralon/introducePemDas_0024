#include <iostream>
using namespace std;

class Barang{

    public:
        string nama;
        float jumlah;
        string kategori;
        float tanggalProduksi;
    void printData()
    {
        cout << "Nama: " << nama << endl;
        cout << "Jumlah: " << jumlah << endl;
        cout << "Kategori: " << kategori << endl;
        cout << "TanggalProduksi" << tanggalProduksi << endl;
    }
};

int main(){

}