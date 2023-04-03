
#include <iostream>
using namespace std;

class Employee{
private:
	string name;
	int age;
	int salary;
public:
	Employee(string name, int age, int salary){
		this->age=age;
		this->name=name;
		this->salary=salary;
	}

	//friend void showInfos(Employee employee);
	friend class Test;
};
class Test{
public:
	static void showInfos(Employee employee){
		cout<<"Name: "<<employee.name<<" age: "<<employee.age<<" salary: "<<employee.salary;
	}
};
/*
  void showInfos(Employee employee){
	cout<<"Name: "<<employee.name<<" age: "<<employee.age<<"salary: "<<employee.salary;
}
*/
int main() {
	Employee employee("Hayrettin", 23, 12222);
	Test::showInfos(employee);

	return 0;
}
