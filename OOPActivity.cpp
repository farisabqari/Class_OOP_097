#include <iostream>
using namespace std;

class Mahasiswa {
private:
	int nim;
	string nama;
	float nilai;
public:
	void input() {
		cout << "Masukan NIM : ";
		cin >> nim;
		cout << "Masukann Nama : ";
		cin >> nama;
		cout << "Masukan Nilai : ";
		cin >> nilai;
	}
	void printData();
};

void Mahasiswa::printData() {
	cout << "\nData Mahasiswa";
	cout << "\nNIM : " << nim;
	cout << "\Namanya : " << nama;
	cout << "\Nnilai : " << nilai;

}

class mataKuliah {
private:
	string kode;
	string namaMK;
	int sks;
public:
	void inputMK() {
		cout << "\n\nMasukan kode mataKuliah :";
		cin >> kode;
		cout << "Masukan Nama Matakuliah : ";
		cin >> namaMK;
		cout << "Masukan SKS :";
		cin >> sks;
	
	}
	void tampil() {
		cout << "\nData Matakuliah";
		cout << "\nKode Matakuliah :" << kode;
		cout << "\Nama Matakuliah :" << namaMK;
		cout << "\nsks :" << sks;
	}
};

