
#include <iostream>
using namespace std;

int main() {

	/*Dangling Referans*/
	int *ptr = nullptr;
	ptr = new int;

	*ptr = 10;

	delete ptr;

	*ptr = 60;

	cout<< *ptr<<endl;


	return 0;
}
