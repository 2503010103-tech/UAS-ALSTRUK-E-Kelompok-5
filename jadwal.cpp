#include "jadwal.h"

void tambahJadwal()
{
    cout << "\n===== TAMBAH JADWAL =====\n";

    cout << "ID Jadwal      : ";
    cin >> dataJadwal[jumlahJadwal].id;
    cin.ignore();

    cout << "Nama Event     : ";
    getline(cin, dataJadwal[jumlahJadwal].namaEvent);

    cout << "Tanggal        : ";
    getline(cin, dataJadwal[jumlahJadwal].tanggal);

    cout << "Jam            : ";
    getline(cin, dataJadwal[jumlahJadwal].jam);

    cout << "Lokasi         : ";
    getline(cin, dataJadwal[jumlahJadwal].lokasi);

    jumlahJadwal++;

    cout << "\nJadwal berhasil ditambahkan.\n";
}

void tampilJadwal()
{
    cout << "\n===== DATA JADWAL =====\n";

    if(jumlahJadwal == 0)
    {
        cout << "Belum ada jadwal.\n";
        return;
    }

    for(int i=0; i<jumlahJadwal; i++)
    {
        cout << "\nJadwal ke-" << i+1 << endl;
        cout << "ID       : " << dataJadwal[i].id << endl;
        cout << "Event    : " << dataJadwal[i].namaEvent << endl;
        cout << "Tanggal  : " << dataJadwal[i].tanggal << endl;
        cout << "Jam      : " << dataJadwal[i].jam << endl;
        cout << "Lokasi   : " << dataJadwal[i].lokasi << endl;
    }
}

void editJadwal()
{
    int id;

    cout << "\nMasukkan ID Jadwal : ";
    cin >> id;
    cin.ignore();

    for(int i=0; i<jumlahJadwal; i++)
    {
        if(dataJadwal[i].id == id)
        {
            cout << "Nama Event Baru : ";
            getline(cin, dataJadwal[i].namaEvent);

            cout << "Tanggal Baru    : ";
            getline(cin, dataJadwal[i].tanggal);

            cout << "Jam Baru        : ";
            getline(cin, dataJadwal[i].jam);

            cout << "Lokasi Baru     : ";
            getline(cin, dataJadwal[i].lokasi);

            cout << "\nData berhasil diubah.\n";
            return;
        }
    }

    cout << "\nJadwal tidak ditemukan.\n";
}

void hapusJadwal()
{
    int id;

    cout << "\nMasukkan ID Jadwal : ";
    cin >> id;

    for(int i=0; i<jumlahJadwal; i++)
    {
        if(dataJadwal[i].id == id)
        {
            for(int j=i; j<jumlahJadwal-1; j++)
            {
                dataJadwal[j] = dataJadwal[j+1];
            }

            jumlahJadwal--;

            cout << "\nJadwal berhasil dihapus.\n";
            return;
        }
    }

    cout << "\nJadwal tidak ditemukan.\n";
}
