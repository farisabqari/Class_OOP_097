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
