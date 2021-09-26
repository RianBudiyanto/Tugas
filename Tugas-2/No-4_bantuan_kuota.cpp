//Program untuk menghitung biaya yang harus dikeluarkan oleh 
pemerintah
#include <iostream>
using namespace std;

void total(int kuota) {
    int  jumlahPenerima, biaya;

    cout << "\nMasukkan jumlah penerima bantuan :";
    cin >> jumlahPenerima;

    biaya = kuota * jumlahPenerima * 6000;
    cout << "\nTotal biaya yang harus dikeluarkan pemerintah : Rp. " << biaya << endl;
} 

int main()
{
    int penerimaBantuan, pengajar, siswa;

    cout << "--------------------------------------------------" << endl;
    cout << "Penerima bantuan kuota akses internet: " << endl;
    cout << "1. Pengajar" << endl;
    cout << "2. Siswa" << endl;
    cout << "Masukkan jenis penerima bantuan (1/2): ";
    cin >> penerimaBantuan;

    if (penerimaBantuan == 1) {
        cout << "\nJenis pengajar: " << endl;
        cout << "1. Pengajar di tingkat Sekolah Dasar hingga Menengah" << endl;
        cout << "2. Pengajar di tingkat Pendidikan Tinggi" << endl;
        cout << "Masukkan jenis pengajar (1/2): ";
        cin >> pengajar;

        if (pengajar == 1) {
            total(42);
        }
        else if (pengajar == 2) {
            total(50);
        } else {
            cout << "\nAngka yang anda masukkan salah" << endl;
        }
    }
    else if (penerimaBantuan == 2) {
        cout << "\nJenis siswa: " << endl;
        cout << "1. Siswa PAUD" << endl;
        cout << "2. Siswa SD" << endl;
        cout << "3. Siswa SMP" << endl;
        cout << "4. Siswa SMA" << endl;
        cout << "5. Mahasiswa" << endl;
        cout << "Masukkan jenis siswa (1/2/3/4/5): ";
        cin >> siswa;

        if (siswa == 1) {
            total(20);
        }
        else if (siswa == 2) {
            total(35);
        }
        else if (siswa == 3) {
            total(35);
        }
        else if (siswa == 4) {
            total(35);
        }
        else if (siswa == 5) {
            total(50);
        } else {
            cout << "\nAngka yang anda masukkan salah" << endl;
        }
    } else {
        cout << "\nAngka yang anda masukkan salah" << endl;
    }
    cout << "--------------------------------------------------" << endl;

    return 0;
}