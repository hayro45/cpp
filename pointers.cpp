#include <iostream>
using namespace std;

int main() {
	int x = 4;

	int *ptr = &x;



	cout<<"x'in değeri: " << x<<endl;
	cout<<"x'in adres değeri: " << &x<<endl;

	cout<<"ptr'in değeri: " << *ptr<<endl;
	cout<<"ptr'in adres değeri: " << ptr<<endl;

	*ptr=6;

	cout<<"x'in yeni değeri: " << x<<endl;
	cout<<"ptr'in yeni değeri: " << *ptr<<endl;

	return 0;
}
