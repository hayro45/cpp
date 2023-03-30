
#include <iostream>
using namespace std;

int main() {
	int x, y;
	string islem;


	cout << "Hesap makinesi porgramına hoş geldiniz..."<<endl;

	cout << "1.işlem: Toplama işlemi " << endl;
	cout << "2.işlem: Çıkarma işlemi " << endl;
	cout << "3.işlem: Çarpma işlemi " << endl;
	cout << "4.işlem: Bölme işlemi " << endl;

	cout << "işlem giriniz: ";
	cin >>  islem;

	cout<<"1.sayı giriniz: ";
	cin>>x;

	cout<<"2.sayı giriniz: ";
	cin>>y;

	if(islem=="1"){
		cout << "x+y = " << (x+y) << endl;
	}else if (islem == "2"){
		cout << "x-y = " << (x-y) << endl;
	}else if (islem == "3"){
		cout << "x*y = " << (x*y) << endl;
	}else if (islem == "4"){
		cout << "x/y = " << (x/y) << endl;
	}else{
		cout<< "lütfen 1-4 arası seçim yap!"<<endl;
	}

	return 0;
}
