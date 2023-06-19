#include<exception>
#include<array>
#include<iostream>
using namespace std;

int main() 
{
	cout << "Awal Program" << endl;
	try {
		array<int, 3> data = { 1, 2, 3 };
		//pesan arrar integer 3 elemen
		//cout << data.at(5)<< endl
		//memanggil array elemen ke 5
	}
	catch(exception &e){
		//penangkap menggunakan  obyek exceptiom
		cout << e.what() << endl;
		/*akan dieksekusi karena array datahanya memiliki 3 elemen*/
	}
	cout << "Baris Program Yang Terakhir" << endl;
	/*penanda 2: bahwa program berjalan tanpa berhenti meskipun terjadi kesalahan*/\
		return 0;
}