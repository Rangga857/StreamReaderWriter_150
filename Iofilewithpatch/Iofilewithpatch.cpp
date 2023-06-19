#include <string>
#include <iostream>
#include <fstream>
using namespace std;

int main() {
	string baris;
	string NamaFile;

	cout << "Masukkan Nama file : ";
	cin >> NamaFile;

	//membuka file dalam mode menulis.
	ofstream outfile;
	// menunjuk  ke sebuah nama fiile
	outfile.open(NamaFile, ios::out);

	cout << "=> Menulis File, \'q\' untuk keluar" << endl;

	//unlimited loop untuk menulis
	while (true) {
		cout << "- ";
		//mendapatkan setiap karakter dalam satu baris
		getline(cin, baris);

	}
}
