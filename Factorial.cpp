//============================================================================
// Name        : Factorial.cpp
// Author      : hayrettin
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int sayi ;
	cout << "num: ";
	cin >> sayi;

	int factorial = 1;
	for(int i=1; i <= sayi; i++){
		factorial*=i;

	}
	cout << "Factorial: " << factorial <<endl;
	return 0;
}
