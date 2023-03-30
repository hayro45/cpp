
#include <iostream>
using namespace std;

void degerDegistir(int &ref){
	ref=20;
}

int main() {
	int a =10;

	//refler tanımlandığı an deger ataması yapılması lazım. Initialize

	cout<<"a: "<< a<<endl;

	degerDegistir(a);
	cout<<"a degerDegistir(a) : "<< a<<endl;

	return 0;
}
