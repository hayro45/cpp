#include <iostream>
using namespace std;

struct Student{
	int id;
	char letter;

};

int main() {
	cout<<"Integer: "<< sizeof(int)<<endl;
	cout<<"Student: "<< sizeof(Student)<<" byte"<<endl;
	cout<<"String: "<< sizeof(string)<<endl;
	return 0;
}
