//============================================================================
// Name        : SwitchCase.cpp
// Author      : hayrettin
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int islem;

	cout << "işlem giriniz: ";
	cin >>islem;

	switch(islem){
		case 1:
			cout<<"1.işlemi seçtiniz.";
			break;
		case 2:
			cout<<"2.işlemi seçtiniz.";
			break;
		case 3:
			cout<<"3.işlemi seçtiniz.";
			break;
		case 4:
			cout<<"4.işlemi seçtiniz.";
			break;
		default:
			cout<<"Geçersiz işlem seçtiniz.";
	}

	return 0;
}
