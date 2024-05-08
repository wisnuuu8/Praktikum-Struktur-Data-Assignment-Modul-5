#include<iostream>
#include<string>

using namespace std;

struct hewan{
	string nama_hewan;
	string jenis_kelamin;
	string kembangbiak;
	string pernafasan;
	string tempat_hidup;
	bool karnivora;
};

struct hewan_darat{
	hewan info_hewan;
	int jumlah_kaki;
	bool apakah_menyusui;
	string suara;
};
hewan_darat hewan1;

struct hewan_laut{
	hewan info_hewan;
	string bentuk_sirip;
	string pertahanan_diri;
};
hewan_laut hewan2;

int main(){
	hewan1.info_hewan.nama_hewan = "Kambing";
	hewan1.info_hewan.jenis_kelamin = "Laki Laki";
	hewan1.info_hewan.kembangbiak = "Melahirkan";
	hewan1.info_hewan.pernafasan = "Paru Paru";
	hewan1.info_hewan.tempat_hidup = "Darat";
	hewan1.info_hewan.karnivora = false;
	hewan1.jumlah_kaki = 4;
	hewan1.apakah_menyusui = true;
	hewan1.suara = "mbekk,mbek,mbek";
	
	hewan2.info_hewan.nama_hewan = "Dugong";
	hewan2.info_hewan.jenis_kelamin = "Perempuan";
	hewan2.info_hewan.kembangbiak = "Melahirkan";
	hewan2.info_hewan.pernafasan = "Paru Paru";
	hewan2.info_hewan.tempat_hidup = "Laut";
	hewan2.info_hewan.karnivora = false;
	hewan2.bentuk_sirip = "Dayung atau Spatula";
	hewan2.pertahanan_diri = "Menghirup oksigen di udara";
	
	
	//menampilkan data
	cout << "\t Hewan Darat" << endl;
	cout << "Nama Hewan :" <<hewan1.info_hewan.nama_hewan << endl;
	cout << "Jenis Kelamin :" <<hewan1.info_hewan.jenis_kelamin << endl;
	cout << "Kembangbiak :" <<hewan1.info_hewan.kembangbiak << endl;
	cout << "Pernapasan :" <<hewan1.info_hewan.pernafasan << endl;
	cout << "Tempat Hidup :" <<hewan1.info_hewan.tempat_hidup << endl;
	cout << "Karnivora :" <<hewan1.info_hewan.karnivora << endl;
	cout << "Jumlah Kaki ;" <<hewan1.jumlah_kaki << endl;
	cout << "Apakah Menyusui? :" <<hewan1.apakah_menyusui << endl;
	cout << "Suara :" <<hewan1.suara << "\n"<<endl;
	
	//menampilkan data
	cout << "\t Hewan Laut" << endl;
	cout << "Nama Hewan :" <<hewan2.info_hewan.nama_hewan << endl;
	cout << "Jenis Kelamin :" <<hewan2.info_hewan.jenis_kelamin << endl;
	cout << "Kembangbiak :" <<hewan2.info_hewan.kembangbiak << endl;
	cout << "Pernapasan :" <<hewan2.info_hewan.pernafasan << endl;
	cout << "Tempat Hidup :" <<hewan2.info_hewan.tempat_hidup << endl;
	cout << "Karnivora :" <<hewan2.info_hewan.karnivora << endl;
	cout << "Bentuk Sirip :" <<hewan2.bentuk_sirip << endl;
	cout << "Pertahanan diri :" <<hewan2.pertahanan_diri << endl;
	
	
	return 0;
}
