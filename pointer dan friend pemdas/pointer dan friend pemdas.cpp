#include <iostream>
using namespace std;

class mahasiswa {
	public;
	int nim;
	void showNim() {
		cout << "No Induk = " << nim << endl;
	}
};

int main()
{

	mahasiswa mhs{ 1 }; //objek mhs
	mhs.showNim(); // member access operator

	mahasiswa& refMhs = mhs; //pointer reference refmhs
	refMhs.nim = 2; //member access operator
	mhs.showNim();

}



