#include "search.h"

void cariEvent()
{
    string cari;
    bool ketemu = false;

    cin.ignore();

    cout << "\nMasukkan Nama Event : ";
    getline(cin, cari);

    for(int i=0; i<jumlahEvent; i++)
    {
        if(dataEvent[i].nama == cari)
        {
            cout << "\n===== EVENT DITEMUKAN =====\n";
            cout << "ID       : " << dataEvent[i].id << endl;
            cout << "Nama     : " << dataEvent[i].nama << endl;
            cout << "Tanggal  : " << dataEvent[i].tanggal << endl;
            cout << "Lokasi   : " << dataEvent[i].lokasi << endl;
            cout << "Kuota    : " << dataEvent[i].kuota << endl;

            ketemu = true;
            break;
        }
    }

    if(!ketemu)
    {
        cout << "\nEvent tidak ditemukan.\n";
    }
}

void urutNamaEvent()
{
    Event temp;

    for(int i=0; i<jumlahEvent-1; i++)
    {
        for(int j=0; j<jumlahEvent-i-1; j++)
        {
            if(dataEvent[j].nama > dataEvent[j+1].nama)
            {
                temp = dataEvent[j];
                dataEvent[j] = dataEvent[j+1];
                dataEvent[j+1] = temp;
            }
        }
    }

    cout << "\nData event berhasil diurutkan berdasarkan nama.\n";
}
