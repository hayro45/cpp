#include <iostream>
using namespace std;

void factorial(int sayi){
	int faktoriyel = 1;

	for(int i = 2; i <= sayi; i++){
		faktoriyel *= i;
	}

	cout<<faktoriyel<<endl;
}

int toplama(int x, int y, int z){
	return x + y + z;
}

int main() {
	int x;
	cout<<"sayi gir: ";
	cin>>x;
	factorial(x);
	toplama(1, 2, 3);
	return 0;
}
