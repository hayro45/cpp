
#include <iostream>
using namespace std;

void test(){
	static int i = 3;
	i++;
	cout<<"i' nin değeri: " << i << endl;
}

int main() {
	test();
	test();
	return 0;
}
