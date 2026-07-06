#ifndef DATA_H
#define DATA_H

#include <iostream>
#include <string>

using namespace std;

const int MAX = 100;

struct Event
{
    int id;
    string nama;
    string tanggal;
    string lokasi;
    int kuota;
};

struct Peserta
{
    string nim;
    string nama;
    string prodi;
    string event;
};

struct Jadwal
{
    int id;
    string namaEvent;
    string tanggal;
    string jam;
    string lokasi;
};

extern Event dataEvent[MAX];
extern Peserta dataPeserta[MAX];
extern Jadwal dataJadwal[MAX];

extern int jumlahEvent;
extern int jumlahPeserta;
extern int jumlahJadwal;

#endif
