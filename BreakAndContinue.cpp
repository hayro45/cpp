//============================================================================
// Name        : BreakAndContinue.cpp
// Author      : hayrettin
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	/* Break komutu
	  int i = 0;

	while (i<10){
		if(i==5){
			break;
		}
		cout << "i: "<< i <<endl;
		i++;
	}
	*/ //Coninue komutu
	for(int i = 0; i < 10; i++){
		if( i%3==0 || i%5==0){
			continue;
		}
		cout<< "i: "<< i<<endl;
	}
	return 0;
}
