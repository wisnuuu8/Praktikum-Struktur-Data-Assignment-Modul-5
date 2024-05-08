#include<iostream>
#include<string>

using namespace std;

struct Buku{
	string judul_buku;
	string pengarang;
	string penerbit;
	int tebal_buku;
	double harga_buku;
}; Buku buku1, buku2;

int main(){
	buku1.judul_buku = "Manusia figuran";
	buku1.pengarang = "Wisnu Aji";
	buku1.penerbit = "Cahaya pelita";
	buku1.tebal_buku = 200;
	buku1.harga_buku = 200000;
	
	buku2.judul_buku = "Tawa dan lara";
	buku2.pengarang = "Sanjaya";
	buku2.penerbit = "Suara merdeka";
	buku2.tebal_buku = 150;
	buku2.harga_buku = 300000;
	
	//menampilkan data
	cout << "Informasi Buku 1\n" << endl;
	cout << "Informasi Buku 1" << endl;
	cout << "Judul :" << buku1.judul_buku << endl;
	cout << "Pengarang :" << buku1.pengarang << endl;
	cout << "Penerbit :" << buku1.penerbit << endl;
	cout << "Tebal_buku :" << buku1.tebal_buku << endl;
	cout << "Harga_buku :" << buku1.harga_buku << endl;
	
	
	//menampilkan data
	cout << "Informasi Buku 2\n" << endl;
	cout << "Informasi Buku 2" << endl;
	cout << "Judul :" << buku2.judul_buku << endl;
	cout << "Pengarang :" << buku2.pengarang << endl;
	cout << "Penerbit :" << buku2.penerbit << endl;
	cout << "Tebal_buku :" << buku2.tebal_buku <<endl;
	cout << "Harga_buku :" << buku2.harga_buku << endl;
	
	return 0;
}
