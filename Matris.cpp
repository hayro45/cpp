//============================================================================
// Name        : Matris.cpp
// Author      : hayrettin
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int matris[3][3];

	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<i<<". Satır "<<j<< ". eleman giriniz: ";
			cin>> matris[i][j];
		}
	}


	for(int i =0; i<3;i++){
		for(int j=0;j<3;j++){

			cout << matris[i][j] << " ";
		}
		cout<<endl;
	}
	return 0;
}
