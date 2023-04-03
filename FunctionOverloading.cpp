#include <iostream>
using namespace std;

void selamla(){
	cout<<"Selam"<<endl;
}

void selamla(string name){
	cout<<"Selam "<< name <<endl;
}

void selamla(string name, string lastname){
	cout<<"Selam "<< name << lastname <<endl;
}

int main() {
	selamla();
	selamla("Hayrettin");
	selamla("Hayrettin", "dal");
	return 0;
}
