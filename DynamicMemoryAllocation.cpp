#include <iostream>
using namespace std;

int main() {
	int *ptr;

	int size;
	cout<<"Kaç değer saklıyacaksiniz: ";
	cin>>size;

	ptr = new int[size];

	for(int i =0; i<size; i++){
		cout<<"Değer: ";
		cin>>ptr[i];
	}

	for(int i=0; i<size; i++){
		cout<<i<<". eleman: "<<ptr[i]<<endl;
	}

	return 0;
}
