#include <iostream>
using namespace std;
int main()
{
    // deklarasi variabel
    int harga_barang, jumlah_barang, total_harga, uang_pembayaran, uang_kembalian;

    // meminta input dari user
    cout << "Harga barang: ";
    cin >> harga_barang;

    cout << "Jumlah barang: ";
    cin >> jumlah_barang;

    // menghitung total harga
    total_harga = harga_barang * jumlah_barang;

    // menampilkan total harga
    cout << "Total harga: " << total_harga << endl;

    // meminta input uang pembayaran
    cout << "Uang pembayaran: ";
    cin >> uang_pembayaran;

    // menghitung uang kembalian
    uang_kembalian = uang_pembayaran - total_harga;

    // menampilkan uang kembalian
    cout << "Uang kembalian: " << uang_kembalian << endl;

    return 0;
}
