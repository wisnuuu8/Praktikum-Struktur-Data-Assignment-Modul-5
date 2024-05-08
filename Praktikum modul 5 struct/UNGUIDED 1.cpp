#include <iostream>
#include <string>

using namespace std;

struct Buku{
	string judul_buku[5];
	string pengarang[5];
	string penerbit[5];
	int tebal_buku[5];
	double harga_buku[5];
};

int main(){
	Buku buku1, buku2;
	
	buku1.judul_buku[0] = "Manusia figuran";
	buku1.pengarang[0] = "Wisnu Aji";
	buku1.penerbit[0] = "Cahaya pelita";
	buku1.tebal_buku[0] = 200;
	buku1.harga_buku[0] = 200000;
	
	buku2.judul_buku[0] = "Tawa dan lara";
	buku2.pengarang[0] = "Sanjaya";
	buku2.penerbit[0] = "Suara merdeka";
	buku2.tebal_buku[0] = 150;
	buku2.harga_buku[0] = 300000;
	
	// Menampilkan data buku 1
	cout << "Informasi Buku 1\n" << endl;
	for(int i = 0; i < 1; ++i) {
		cout << "Judul :" << buku1.judul_buku[i] << endl;
		cout << "Pengarang :" << buku1.pengarang[i] << endl;
		cout << "Penerbit :" << buku1.penerbit[i] << endl;
		cout << "Tebal_buku :" << buku1.tebal_buku[i] << endl;
		cout << "Harga_buku :" << buku1.harga_buku[i] << endl;
		cout << endl;
	}
	
	// Menampilkan data buku 2
	cout << "Informasi Buku 2\n" << endl;
	for(int i = 0; i < 1; ++i) {
		cout << "Judul :" << buku2.judul_buku[i] << endl;
		cout << "Pengarang :" << buku2.pengarang[i] << endl;
		cout << "Penerbit :" << buku2.penerbit[i] << endl;
		cout << "Tebal_buku :" << buku2.tebal_buku[i] << endl;
		cout << "Harga_buku :" << buku2.harga_buku[i] << endl;
		cout << endl;
	}
	
	return 0;
}

