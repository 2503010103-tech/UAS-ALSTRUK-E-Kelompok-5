#include "event.h"

void tambahEvent()
{
    cout << "\n=== TAMBAH EVENT ===\n";

    cout << "ID Event       : ";
    cin >> dataEvent[jumlahEvent].id;
    cin.ignore();

    cout << "Nama Event     : ";
    getline(cin, dataEvent[jumlahEvent].nama);

    cout << "Tanggal Event  : ";
    getline(cin, dataEvent[jumlahEvent].tanggal);

    cout << "Lokasi Event   : ";
    getline(cin, dataEvent[jumlahEvent].lokasi);

    cout << "Kuota          : ";
    cin >> dataEvent[jumlahEvent].kuota;

    jumlahEvent++;

    cout << "\nEvent berhasil ditambahkan!\n";
}

void tampilEvent()
{
    cout << "\n===== DATA EVENT =====\n";

    if(jumlahEvent==0)
    {
        cout<<"Belum ada data event.\n";
        return;
    }

    for(int i=0;i<jumlahEvent;i++)
    {
        cout<<"\nData ke-"<<i+1<<endl;
        cout<<"ID       : "<<dataEvent[i].id<<endl;
        cout<<"Nama     : "<<dataEvent[i].nama<<endl;
        cout<<"Tanggal  : "<<dataEvent[i].tanggal<<endl;
        cout<<"Lokasi   : "<<dataEvent[i].lokasi<<endl;
        cout<<"Kuota    : "<<dataEvent[i].kuota<<endl;
    }
}

void editEvent()
{
    int id;

    cout<<"\nMasukkan ID Event : ";
    cin>>id;
    cin.ignore();

    for(int i=0;i<jumlahEvent;i++)
    {
        if(dataEvent[i].id==id)
        {
            cout<<"Nama Baru     : ";
            getline(cin,dataEvent[i].nama);

            cout<<"Tanggal Baru  : ";
            getline(cin,dataEvent[i].tanggal);

            cout<<"Lokasi Baru   : ";
            getline(cin,dataEvent[i].lokasi);

            cout<<"Kuota Baru    : ";
            cin>>dataEvent[i].kuota;

            cout<<"\nData berhasil diubah!\n";
            return;
        }
    }

    cout<<"\nEvent tidak ditemukan!\n";
}

void hapusEvent()
{
    int id;

    cout<<"\nMasukkan ID Event : ";
    cin>>id;

    for(int i=0;i<jumlahEvent;i++)
    {
        if(dataEvent[i].id==id)
        {
            for(int j=i;j<jumlahEvent-1;j++)
            {
                dataEvent[j]=dataEvent[j+1];
            }

            jumlahEvent--;

            cout<<"\nEvent berhasil dihapus!\n";
            return;
        }
    }

    cout<<"\nEvent tidak ditemukan!\n";
}
