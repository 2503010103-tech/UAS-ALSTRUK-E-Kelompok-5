#include <iostream>
using namespace std;

#include "data.h"
#include "event.h"
#include "peserta.h"
#include "jadwal.h"
#include "search.h"

// DEFINISI VARIABEL GLOBAL
Event dataEvent[MAX];
Peserta dataPeserta[MAX];
Jadwal dataJadwal[MAX];

int jumlahEvent = 0;
int jumlahPeserta = 0;
int jumlahJadwal = 0;

void menuEvent();
void menuPeserta();
void menuJadwal();

int main()
{
    int pilih;

    do
    {
        cout << "\n====================================";
        cout << "\n SISTEM MANAJEMEN EVENT KAMPUS";
        cout << "\n====================================";
        cout << "\n1. Kelola Event";
        cout << "\n2. Kelola Peserta";
        cout << "\n3. Kelola Jadwal";
        cout << "\n4. Cari Event";
        cout << "\n5. Urutkan Event";
        cout << "\n0. Keluar";
        cout << "\n====================================";
        cout << "\nPilihan : ";
        cin >> pilih;

        switch(pilih)
        {
            case 1:
                menuEvent();
                break;

            case 2:
                menuPeserta();
                break;

            case 3:
                menuJadwal();
                break;

            case 4:
                cariEvent();
                break;

            case 5:
                urutNamaEvent();
                break;

            case 0:
                cout << "\nTerima kasih...\n";
                break;

            default:
                cout << "\nPilihan salah!\n";
        }

    }while(pilih!=0);
}

void menuEvent()
{
    int pilih;

    do
    {
        cout << "\n===== MENU EVENT =====";
        cout << "\n1. Tambah Event";
        cout << "\n2. Tampilkan Event";
        cout << "\n3. Edit Event";
        cout << "\n4. Hapus Event";
        cout << "\n0. Kembali";
        cout << "\nPilihan : ";
        cin >> pilih;

        switch(pilih)
        {
            case 1:
                tambahEvent();
                break;

            case 2:
                tampilEvent();
                break;

            case 3:
                editEvent();
                break;

            case 4:
                hapusEvent();
                break;

            case 0:
                break;

            default:
                cout << "\nPilihan salah!\n";
        }

    }while(pilih!=0);
}

void menuPeserta()
{
    int pilih;

    do
    {
        cout << "\n===== MENU PESERTA =====";
        cout << "\n1. Daftar Peserta";
        cout << "\n2. Tampilkan Peserta";
        cout << "\n3. Hapus Peserta";
        cout << "\n0. Kembali";
        cout << "\nPilihan : ";
        cin >> pilih;

        switch(pilih)
        {
            case 1:
                daftarPeserta();
                break;

            case 2:
                tampilPeserta();
                break;

            case 3:
                hapusPeserta();
                break;

            case 0:
                break;

            default:
                cout << "\nPilihan salah!\n";
        }

    }while(pilih!=0);
}

void menuJadwal()
{
    int pilih;

    do
    {
        cout << "\n===== MENU JADWAL =====";
        cout << "\n1. Tambah Jadwal";
        cout << "\n2. Tampilkan Jadwal";
        cout << "\n3. Edit Jadwal";
        cout << "\n4. Hapus Jadwal";
        cout << "\n0. Kembali";
        cout << "\nPilihan : ";
        cin >> pilih;

        switch(pilih)
        {
            case 1:
                tambahJadwal();
                break;

            case 2:
                tampilJadwal();
                break;

            case 3:
                editJadwal();
                break;

            case 4:
                hapusJadwal();
                break;

            case 0:
                break;

            default:
                cout << "\nPilihan salah!\n";
        }

    }while(pilih!=0);
}
