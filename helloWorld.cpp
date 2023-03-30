#include <iostream>
using namespace std;

int main() {
	bool f=false;
	string password = "hayrettin";

	while(f==false){
		string input;
		cout << "Parola gir: ";

		cin >> input;


		if(password == input){
			cout << "hoşgeldin!" << endl;
			f=true;
		}else{
			cout << "sen kimsin!" << endl;
		}
	}

	return 0;
}
