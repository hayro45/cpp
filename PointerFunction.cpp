#include <iostream>
using namespace std;

void degerDegistir(int *ptr){
	*ptr = 12;
	cout<<"fonksiyon içindeki değer"<<*ptr<<endl;
}


int main() {
	int x=10;
	cout<<"x'in ilk değeri"<<x<<endl;

	degerDegistir(&x);
	cout<<"x'in ikinci değeri"<<x<<endl;

	return 0;
}
