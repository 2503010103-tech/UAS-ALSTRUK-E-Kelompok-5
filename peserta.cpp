#include "peserta.h"

void daftarPeserta()
{
    cout << "\n===== DAFTAR PESERTA =====\n";

    cin.ignore();

    cout << "NIM            : ";
    getline(cin, dataPeserta[jumlahPeserta].nim);

    cout << "Nama           : ";
    getline(cin, dataPeserta[jumlahPeserta].nama);

    cout << "Prodi          : ";
    getline(cin, dataPeserta[jumlahPeserta].prodi);

    cout << "Nama Event     : ";
    getline(cin, dataPeserta[jumlahPeserta].event);

    jumlahPeserta++;

    cout << "\nPeserta berhasil didaftarkan.\n";
}

void tampilPeserta()
{
    cout << "\n===== DATA PESERTA =====\n";

    if(jumlahPeserta == 0)
    {
        cout << "Belum ada peserta.\n";
        return;
    }

    for(int i=0; i<jumlahPeserta; i++)
    {
        cout << "\nPeserta ke-" << i+1 << endl;
        cout << "NIM        : " << dataPeserta[i].nim << endl;
        cout << "Nama       : " << dataPeserta[i].nama << endl;
        cout << "Prodi      : " << dataPeserta[i].prodi << endl;
        cout << "Event      : " << dataPeserta[i].event << endl;
    }
}

void hapusPeserta()
{
    string nim;

    cout << "\nMasukkan NIM Peserta : ";
    cin.ignore();
    getline(cin, nim);

    for(int i=0; i<jumlahPeserta; i++)
    {
        if(dataPeserta[i].nim == nim)
        {
            for(int j=i; j<jumlahPeserta-1; j++)
            {
                dataPeserta[j] = dataPeserta[j+1];
            }

            jumlahPeserta--;

            cout << "\nData peserta berhasil dihapus.\n";
            return;
        }
    }

    cout << "\nPeserta tidak ditemukan.\n";
}
