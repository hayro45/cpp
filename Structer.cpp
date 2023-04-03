#include <iostream>
using namespace std;

struct Adress{
		string city;
		int no;
};

struct Employee {
	int id;
	string name;
	string department;
	Adress adress;
};

void show(Employee* employee){
		cout << "Id: "<<employee->id<<endl;
		cout << "İsim: "<<employee->name<<endl;
		cout << "Departman: "<<employee->department<<endl;
}

void showEmployee(Employee employee){
	cout << "Id: "<<employee.id<<endl;
	cout << "İsim: "<<employee.name<<endl;
	cout << "Departman: "<<employee.department<<endl;
	cout << "Şehir: "<<employee.adress.city << " No: "<<employee.adress.no<<endl;
}

int main() {
	Employee employee1 = {12, "Hayrettin Dal", "Bilişim", {"İstanbul", 31}};
	//employee1.adress={"Ankara", 3};
	showEmployee(employee1);

	show(&employee1);

	return 0;
}
