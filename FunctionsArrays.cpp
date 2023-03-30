#include <iostream>
using namespace std;

void printArray(int *ptr, int sizeA){
	for(int i=0; i < sizeA; i++){
		cout<<ptr[i]<<endl;
	}
}

int main() {
	int array[]={
			12,23,45
	};

	printArray(array, 3);

	return 0;
}
