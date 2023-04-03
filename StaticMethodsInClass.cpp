
#include <iostream>
using namespace std;

class Math{
	public :
	 	 static void cube(int x){
	 		 cout<<x<<"^3= "<<x*x*x<<endl;
	 	 }
	 	 static void add(int x, int y){
	 		 cout<<x+y<<endl;
	 	 }
};

int main() {
	Math::cube(2);
	Math::add(4, 5);
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
