#include <iostream>
using namespace std;
class Employee{
public:
	string *s;
	int *i;
	Employee(string str, int ivalue){
		s = new string;
		i = new int;

		*s = str;
		*i = ivalue;
	}

	void show(){
		cout<<"String: "<<*s<<" İnt: "<<*i<<endl;
	}


	~Employee(){
		delete s;
		delete i;
		cout<<"Destructor çalıştı"<<endl;
	}
};
int main() {
	Employee *emp = new Employee("hayrettin", 23);

	emp->show();
	delete emp;
	return 0;
}
