**BAB 1**

**PENDAHULUAN**

**LATAR BELAKANG**

Algoritma yang melibatkan struktur data dan variabel adalah inti dari banyak program komputer. Struktur data adalah cara untuk mengatur dan menyimpan data dalam komputer sehingga dapat diakses dan dimanipulasi secara efisien. Sedangkan variabel adalah simbol yang digunakan untuk menyimpan nilai yang dapat berubah selama eksekusi program.

Penggunaan struktur data dan variabel dalam algoritma memberikan fleksibilitas dan kekuatan untuk memproses informasi secara efisien. Beberapa struktur data umum meliputi array, linked list, stack, queue, tree, dan graph. Setiap struktur data memiliki karakteristik dan kegunaannya sendiri, tergantung pada jenis data yang akan disimpan dan operasi yang akan dilakukan.

Variabel memungkinkan program untuk menyimpan dan memanipulasi data, baik sementara maupun secara permanen. Mereka dapat digunakan untuk menyimpan angka, teks, daftar nilai, dan bahkan objek yang lebih kompleks. Dalam algoritma, variabel sering digunakan untuk menyimpan hasil perhitungan sementara, nilai yang dimasukkan oleh pengguna, atau status program.

Pemahaman yang kuat tentang struktur data dan variabel sangat penting dalam pengembangan perangkat lunak. Dengan menggunakan struktur data yang tepat dan mengelola variabel dengan baik, seorang pengembang dapat menciptakan algoritma yang efisien, cepat, dan mudah dipahami. Ini membantu dalam menyelesaikan berbagai masalah komputasi, mulai dari aplikasi sederhana hingga sistem yang kompleks.

**RUMUSAN MASALAH**

1. Apa itu konsep struktur (struct)?
2. Bagaimana cara menerapkan struct kedalam pemrograman?
3. Bagaimana cara  menerapkan array pada struct?

**TUJUAN PRAKTIKUM**

1. Mahasiswa mampu menjelaskan konsep struktur (struct)
2. Mahasiswa mampu menerapkan struct kedalam pemrograman
3. Mahasiswa mampu menerapkan array pada struct

**BAB 2**

**PEMBAHASAN**

**DASAR TEORI**

Variabel dalam pemrograman berfungsi sebagai wadah untuk menyimpan data dengan tipe tertentu. Deklarasi variabel dilakukan dengan format yang jelas, menentukan tipe data dan nama variabel, seperti contoh `int berat`, `string mata_kuliah`, atau `char jenis_kelamin`. Secara default, variabel hanya dapat menampung satu nilai tunggal, seperti `175 kg` untuk variabel `berat`. Namun, jika diperlukan penyimpanan lebih dari satu nilai, variabel dapat diinisialisasi sebagai array dengan menentukan jumlah elemen yang diinginkan. Variabel juga dibagi menjadi dua jenis utama: lokal dan global. Variabel lokal dideklarasikan di dalam fungsi atau prosedur dan hanya dikenali oleh bagian kode yang mendeklarasikannya, sementara variabel global dideklarasikan di luar fungsi atau prosedur dan dapat diakses oleh semua bagian dari program.

Struktur (struct) merupakan tipe data bentukan yang memungkinkan pengelompokan beberapa tipe data standar atau tipe data bentukan lain yang telah didefinisikan sebelumnya. Dalam pembuatan struktur, digunakan keyword `struct`, yang kemudian diikuti oleh definisi struktur. Setelah struktur dibuat, tipe data struct yang telah dibuat menjadi tipe data standar yang bisa digunakan seperti tipe data standar lainnya. Ini berarti bahwa kita dapat menggunakan struktur tersebut untuk membuat variabel dengan tipe data yang telah didefinisikan sebelumnya. Dengan pemahaman yang kuat tentang variabel dan struktur, pengembang dapat merancang algoritma yang efisien dan mudah dimengerti, memungkinkan mereka untuk menyelesaikan berbagai masalah pemrograman dengan baik.

**GUIDED**

**GUIDED 1**

Buatlah sebuah struktur dengan nama buku yang berisi judul_buku,
pengarang, penerbit, tebal_halaman, harga_buku. Isi dengan nilai kemudian
tampilkan

```C++
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
```
**BAGIAN 1**
```C++
#include<iostream>
#include<string>

using namespace std;
```
Interpretasi :

include iostream : Ini adalah preprocessor directive yang menyertakan pustaka input-output standar C++ ke dalam program. Ini diperlukan untuk menggunakan fungsi-fungsi dasar seperti cout dan cin untuk output dan input data.

include string : Ini adalah preprocessor directive yang menyertakan pustaka string ke dalam program. Pustaka ini memberikan fungsionalitas untuk bekerja dengan tipe data string di C++, seperti deklarasi, manipulasi, dan operasi pada string.

using namespace std;: Ini adalah deklarasi yang mengizinkan penggunaan semua simbol dalam namespace std tanpa menuliskan std:: di depannya setiap kali digunakan. Namespace std berisi semua fungsi, tipe data, dan objek yang didefinisikan dalam pustaka standar C++.

**BAGIAN 2**
```C++
struct Buku{
	string judul_buku;
	string pengarang;
	string penerbit;
	int tebal_buku;
	double harga_buku;
}; Buku buku1, buku2;
```
Interpretasi :

Kode tersebut mendefinisikan sebuah struktur (struct) bernama `Buku`. Struktur ini memiliki beberapa atribut (juga dikenal sebagai "fields" atau "members") yang merepresentasikan informasi mengenai sebuah buku, seperti judul, pengarang, penerbit, tebal buku, dan harga buku. Setiap atribut memiliki tipe data yang sesuai, yaitu:

1. `judul_buku`: String yang menyimpan judul buku.
2. `pengarang`: String yang menyimpan nama pengarang buku.
3. `penerbit`: String yang menyimpan nama penerbit buku.
4. `tebal_buku`: Integer yang menyimpan jumlah halaman buku.
5. `harga_buku`: Double yang menyimpan harga buku.

Setelah mendefinisikan struktur `Buku`, kode tersebut juga membuat dua variabel bertipe `Buku`, yaitu `buku1` dan `buku2`, yang akan digunakan untuk menyimpan informasi tentang dua buku yang berbeda. Setiap variabel ini memiliki atribut-atribut yang sama dengan struktur `Buku`.

**BAGIAN 3**
```C++
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
```
Interpretasi :

1. Mendefinisikan struct `Buku` yang memiliki lima atribut: `judul_buku`, `pengarang`, `penerbit`, `tebal_buku`, dan `harga_buku`.

2. Membuat dua objek dari struct `Buku`, yaitu `buku1` dan `buku2`.

3. Menginisialisasi data untuk masing-masing objek:
   - Untuk `buku1`: judul_buku = "Manusia figuran", pengarang = "Wisnu Aji", penerbit = "Cahaya pelita", tebal_buku = 200, harga_buku = 200000.
   - Untuk `buku2`: judul_buku = "Tawa dan lara", pengarang = "Sanjaya", penerbit = "Suara merdeka", tebal_buku = 150, harga_buku = 300000.

4. Menampilkan data dari `buku1` dan `buku2` ke layar menggunakan `cout`.

5. Menggunakan `cout` untuk menampilkan informasi tentang buku1 dan buku2, termasuk judul, pengarang, penerbit, tebal buku, dan harga buku.

6. Mengembalikan nilai 0 untuk menandakan bahwa program selesai dijalankan dengan sukses.

**HASIL OUTPUT**
```C++
Informasi Buku 1

Informasi Buku 1
Judul :Manusia figuran
Pengarang :Wisnu Aji
Penerbit :Cahaya pelita
Tebal_buku :200
Harga_buku :200000
Informasi Buku 2

Informasi Buku 2
Judul :Tawa dan lara
Pengarang :Sanjaya
Penerbit :Suara merdeka
Tebal_buku :150
Harga_buku :300000

--------------------------------
Process exited after 0.06876 seconds with return value 0
Press any key to continue . . .
```

**GUIDED 2**

Buatlah sebuah struktur dengan skema seperti dibawah, isi dengan nilai
kemudian jalankan

```C++
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
```
**BAGIAN 1**
```C++
#include<iostream>
#include<string>

using namespace std;
```
Interpretasi :

include iostream : Ini adalah preprocessor directive yang menyertakan pustaka input-output standar C++ ke dalam program. Ini diperlukan untuk menggunakan fungsi-fungsi dasar seperti cout dan cin untuk output dan input data.

include string : Ini adalah preprocessor directive yang menyertakan pustaka string ke dalam program. Pustaka ini memberikan fungsionalitas untuk bekerja dengan tipe data string di C++, seperti deklarasi, manipulasi, dan operasi pada string.

using namespace std;: Ini adalah deklarasi yang mengizinkan penggunaan semua simbol dalam namespace std tanpa menuliskan std:: di depannya setiap kali digunakan. Namespace std berisi semua fungsi, tipe data, dan objek yang didefinisikan dalam pustaka standar C++.

**BAGIAN 2**
```C++
struct hewan{
	string nama_hewan;
	string jenis_kelamin;
	string kembangbiak;
	string pernafasan;
	string tempat_hidup;
	bool karnivora;
};
```
Interpretasi :

nama_hewan: Atribut ini merupakan sebuah string yang menyimpan nama dari hewan tersebut.

jenis_kelamin: Atribut ini merupakan sebuah string yang menyimpan informasi tentang jenis kelamin hewan tersebut (misalnya: "jantan" atau "betina").

kembangbiak: Atribut ini merupakan sebuah string yang menyimpan informasi tentang cara berkembang biaknya hewan tersebut (misalnya: "ovovivipar" atau "vivipar").

pernafasan: Atribut ini merupakan sebuah string yang menyimpan informasi tentang jenis pernafasan hewan tersebut (misalnya: "paru-paru" atau "insang").

tempat_hidup: Atribut ini merupakan sebuah string yang menyimpan informasi tentang tempat hidup alami dari hewan tersebut (misalnya: "darat" atau "air tawar").

karnivora: Atribut ini merupakan sebuah variabel boolean yang menyatakan apakah hewan tersebut adalah karnivora atau bukan. Jika nilainya true, berarti hewan tersebut adalah karnivora; jika false, berarti hewan tersebut bukan karnivora.

**BAGIAN 3**
```C++
struct hewan_darat{
	hewan info_hewan;
	int jumlah_kaki;
	bool apakah_menyusui;
	string suara;
};
hewan_darat hewan1;
```
Interpretasi :

info_hewan: Atribut ini adalah sebuah objek atau variabel bertipe hewan. Namun, dalam kode yang diberikan, tidak diberikan definisi untuk tipe data hewan, sehingga tidak bisa diketahui secara pasti apa yang dimaksud dengan hewan. Mungkin ada definisi terpisah untuk tipe hewan di dalam kode yang tidak diberikan.

jumlah_kaki: Atribut ini bertipe int dan mewakili jumlah kaki dari hewan darat yang dimaksud.

apakah_menyusui: Atribut ini bertipe bool dan mewakili apakah hewan darat tersebut menyusui atau tidak. Jika nilainya true, berarti hewan tersebut menyusui, dan jika false, berarti tidak.

suara: Atribut ini bertipe string dan mewakili suara yang dihasilkan oleh hewan darat tersebut.

Setelah mendefinisikan struktur hewan_darat, kode tersebut mendeklarasikan sebuah variabel dengan nama hewan1 yang bertipe hewan_darat. Ini berarti kita telah membuat sebuah objek dari struktur hewan_darat yang dapat digunakan dalam program untuk menyimpan informasi tentang hewan darat, seperti jumlah kaki, apakah menyusui atau tidak, dan suara yang dihasilkan.

**BAGIAN 4**
```C++
struct hewan_laut{
	hewan info_hewan;
	string bentuk_sirip;
	string pertahanan_diri;
};
hewan_laut hewan2;
```
Interpretasi :

Code tersebut mendefinisikan sebuah struct dengan nama `hewan_laut`, yang memiliki tiga atribut: `info_hewan`, `bentuk_sirip`, dan `pertahanan_diri`. 

`info_hewan` merupakan sebuah variabel atau objek yang bertipe data `hewan`, yang mungkin merupakan struct lain yang telah didefinisikan di dalam program. Karena kita tidak memiliki definisi lengkap dari struct `hewan`, kita tidak bisa memberikan interpretasi yang lebih spesifik tentang apa yang mungkin ada di dalamnya. Namun, kita dapat berasumsi bahwa `info_hewan` akan menyimpan informasi tentang hewan tertentu, seperti nama, jenis, habitat, dll.

`bentuk_sirip` adalah variabel bertipe string yang akan menyimpan informasi tentang bentuk sirip hewan laut tersebut.

`pertahanan_diri` juga adalah variabel bertipe string yang akan menyimpan informasi tentang strategi atau mekanisme pertahanan diri yang dimiliki oleh hewan laut tersebut.

Kemudian, di luar definisi struct, dibuat sebuah objek `hewan2` dari tipe `hewan_laut`. Objek ini dapat digunakan untuk menyimpan dan mengakses informasi tentang hewan laut tertentu, termasuk informasi tentang hewan (`info_hewan`), bentuk sirip, dan pertahanan diri.

**BAGIAN 5**
```C++
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
```
Interpretasi :

Kode yang Anda berikan menggambarkan penggunaan struktur data untuk merepresentasikan hewan, di mana setiap hewan memiliki atribut-atribut tertentu. Atribut-atribut tersebut diakses melalui struktur data yang telah didefinisikan sebelumnya.

Dalam kode tersebut, terdapat dua objek hewan yang didefinisikan sebagai `hewan1` dan `hewan2`. Setiap objek hewan memiliki beberapa atribut yang diberikan nilai:

- `hewan1` adalah seekor kambing dengan atribut-atribut seperti nama hewan, jenis kelamin, cara berkembang biak, jenis pernafasan, tempat hidup, jumlah kaki, apakah hewan tersebut menyusui anaknya, dan suara yang dihasilkan.
- `hewan2` adalah seekor dugong dengan atribut-atribut yang serupa dengan `hewan1`, namun tambahan atribut bentuk sirip dan cara pertahanan diri.

Setelah nilai atribut-atribut tersebut diisi, kode menampilkan informasi tentang kedua hewan tersebut dengan menggunakan `cout`. Informasi yang ditampilkan mencakup semua atribut-atribut yang telah didefinisikan.

**UNGUIDED**

**UNGUIDED 1**
```C++
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
```
**BAGIAN 1**
```C++
#include <iostream>
#include <string>

using namespace std;
```
Interpretasi :

include iostream : Ini adalah preprocessor directive yang menyertakan pustaka input-output standar C++ ke dalam program. Ini diperlukan untuk menggunakan fungsi-fungsi dasar seperti cout dan cin untuk output dan input data.

include string : Ini adalah preprocessor directive yang menyertakan pustaka string ke dalam program. Pustaka ini memberikan fungsionalitas untuk bekerja dengan tipe data string di C++, seperti deklarasi, manipulasi, dan operasi pada string.

using namespace std;: Ini adalah deklarasi yang mengizinkan penggunaan semua simbol dalam namespace std tanpa menuliskan std:: di depannya setiap kali digunakan. Namespace std berisi semua fungsi, tipe data, dan objek yang didefinisikan dalam pustaka standar C++.

**BAGIAN 2**
```C++
struct Buku{
	string judul_buku[5];
	string pengarang[5];
	string penerbit[5];
	int tebal_buku[5];
	double harga_buku[5];
};
```
Interpretasi :

1. `judul_buku`: Array dari string yang digunakan untuk menyimpan judul buku.
2. `pengarang`: Array dari string yang digunakan untuk menyimpan nama pengarang buku.
3. `penerbit`: Array dari string yang digunakan untuk menyimpan nama penerbit buku.
4. `tebal_buku`: Array dari integer yang digunakan untuk menyimpan jumlah halaman (tebal) dari buku.
5. `harga_buku`: Array dari double yang digunakan untuk menyimpan harga buku.

Dengan menggunakan array, struct ini dapat menyimpan informasi tentang beberapa buku sekaligus, dalam hal ini, hingga lima buku. Ini memberikan fleksibilitas dalam menyimpan dan mengelola data buku dalam program.

**BAGIAN 3**
```C++
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
```
Interpretasi :

Kode yang Anda berikan adalah sebuah program C++ yang mendeklarasikan dua objek dari tipe `Buku`, yaitu `buku1` dan `buku2`. Kemudian, data buku (judul, pengarang, penerbit, tebal buku, dan harga buku) dimasukkan ke dalam array yang merupakan atribut dari objek `buku1` dan `buku2`. Setelah itu, program menampilkan informasi dari kedua buku tersebut dengan menggunakan loop `for` yang berjalan hanya satu kali untuk setiap buku. Hal ini dilakukan karena ukuran array yang digunakan hanya 1.

Pertama, data buku pertama (`buku1`) dimasukkan:

- Judul: "Manusia figuran"
- Pengarang: "Wisnu Aji"
- Penerbit: "Cahaya pelita"
- Tebal buku: 200 halaman
- Harga buku: Rp. 200.000,-

Kemudian, data buku kedua (`buku2`) dimasukkan:

- Judul: "Tawa dan lara"
- Pengarang: "Sanjaya"
- Penerbit: "Suara merdeka"
- Tebal buku: 150 halaman
- Harga buku: Rp. 300.000,-

Setelah data dimasukkan, program mencetak informasi buku satu per satu dengan menggunakan loop `for`, namun loop tersebut hanya berjalan satu kali karena batas iterasi adalah 1. Sehingga, hanya satu set informasi dari masing-masing buku yang dicetak.

Kemudian, program menampilkan informasi buku pertama, diikuti dengan informasi buku kedua. Setiap informasi buku mencakup judul, pengarang, penerbit, tebal buku, dan harga buku.

**HASIL OUTPUT**
```C++
Informasi Buku 1

Judul :Manusia figuran
Pengarang :Wisnu Aji
Penerbit :Cahaya pelita
Tebal_buku :200
Harga_buku :200000

Informasi Buku 2

Judul :Tawa dan lara
Pengarang :Sanjaya
Penerbit :Suara merdeka
Tebal_buku :150
Harga_buku :300000


--------------------------------
Process exited after 0.07025 seconds with return value 0
Press any key to continue . . .
```

**UNGUIDED 2**

Apa yang terjadi jika deklarasi variabel struct yang dibuat pada tugas guided I,
berjenis Array. Bagaimana cara mengisi data dan menampilkannya ?

JAWABAN :

Dalam membuat program untuk mengelola data buku, kita dapat menggunakan struktur (struct) sebagai wadah untuk menyimpan informasi tentang buku. Jika kita ingin membuat array dari buku-buku tersebut, kita dapat mendeklarasikan sebuah array dari tipe data struct yang telah kita buat. Misalnya, untuk membuat array dari 3 buku, kita dapat mendeklarasikan sebuah array `daftar_buku` yang berukuran 3 dan setiap elemennya merupakan sebuah struct `Buku`. Dengan menggunakan loop, kita dapat mengisi data buku ke dalam array `daftar_buku`, meminta pengguna untuk memasukkan judul, pengarang, penerbit, tebal buku, dan harga buku untuk setiap buku. Setelah data terisi, kita dapat menggunakan loop lagi untuk menampilkan informasi tentang setiap buku yang telah dimasukkan. Dengan pendekatan ini, kita dapat dengan efisien mengelola data buku dalam program kita.

**DAFTAR PUSTAKA**



