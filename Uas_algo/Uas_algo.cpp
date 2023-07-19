#include <iostream>
#include <string>
using namespace std;

//isi disini
const int MAX_MAHASISWA = 100;

int NIM[100];
string nama[100];
int tahunMasuk[100];
int jumlahMahasiswa = 0;

class mahasiswa {
public:
	int NIM;
	string nama;
	int tahunmasuk;
};

class cariMahasiswa {
private:
	mahasiswa* START;
public:

	void tambahMahasiswa();
	void tampilkanSemuaMahasiswa();
	void algorithmacariMahasiswaByNIM();
	void algorithmaSortByTahunMasuk();
};

cariMahasiswa::cariMahasiswa() {
	START = NULL;
}

void cariMahasiswa::tambahMahasiswa() {
	int NIM;
	string nama;
	cout << "\nMasukkan nomor dari mahasiswa: ";
	cin >> NIM;
	cout << "\nMasukkan nama dari mahasiswa: ";
	cin >> nama;
}
void cariMahasiswa::tampilkanSemuaMahasiswa() {
	int NIM;
	string nama;
	int tahunMasuk;
	cout << "\nMasukkan nomor dari Mahasiswa: ";
	cin >> NIM;
	cout << "\nMasukkan nama dari mahasiswa: ";
	cin >> nama;
	cout << "\nMasukkan tahun masuk mahasiswa: ";
	cin >> tahunMasuk;
}

void cariMahasiswa::algorithmacariMahasiswaByNIM() {
	int NIM;
	cout << "\nMasukkan nim untuk mencari mahasiswa: ";
	cin >> NIM;
}
void cariMahasiswa::algorithmaSortByTahunMasuk() {
	int tahunMasuk;
	cout << "\nMasukkan tahun masuk mahasiswa: ";
	cin >> tahunMasuk;
}

int main() {
	cariMahasiswa opn;
	int pilihan;
	do {
		cout << "========== MENU MANAJEMEN DATA MAHASISWA ==========" << endl;
		cout << "1. Tambah Mahasiswa" << endl;
		cout << "2. Tampilkan Semua Mahasiswa" << endl;
		cout << "3. Cari Mahasiswa berdasarkan NIM" << endl;
		cout << "4. Tampilkan Mahasiswa berdasarkan Tahun Masuk" << endl;
		cout << "5. Keluar" << endl;
		cout << "Pilihan: ";
		cin >> pilihan;
		cin.ignore();
		switch (pilihan) {
		case 1:
			opn.tambahMahasiswa();
			break;
		case 2:
			opn.tampilkanSemuaMahasiswa();
			break;
		case 3:
			opn.algorithmacariMahasiswaByNIM();
			break;
		case 4:
			opn.algorithmaSortByTahunMasuk();
			break;
		case 5:
			cout << "Terima kasih! Program selesai." << endl;
			break;
		default:
			cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
		}
		cout << endl;
	} while (pilihan != 5);
	return 0;
}

//2. duoble linked list
//3. stack : data yang masuk pertama akan keluar terakhir sedangkan data yang masuk paling akhir akan keluar pertama yang di sebut push dan pop
//	 queue : data yang masuknya berurutan 
//4. 