#include <iostream>
using namespace std;

class Student{
public:
	string name;

	void tellName(){
		cout<<"Benim adım: "<<name<<endl;
	}
};

int main() {
	Student student1;
	student1.name = "Hayrettin";
	student1.tellName();

	Student student2;
	student2.name = "Zeynep";
	student2.tellName();

	return 0;
}
