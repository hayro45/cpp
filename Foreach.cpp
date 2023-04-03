
#include <iostream>
using namespace std;

int main() {

	int a[]={
			10, 20, 30, 40
	};
	/*for kullanımı
	 * for(int i=0; i<4; i++){
		cout<<a[i];
	}*/

	//foreach kullanımı
	for(int item: a){
		cout<<item;
	}
	return 0;
}
