#include <iostream>
using namespace std;

class Test{
	int a;
public:

	Test(int a){
		this->a=a;
	}
	void test(){
		cout<<"Test Metodu"<<endl;
	}
	int getValue() const{
		return this->a;
	}
};
void test(const Test &test){
	cout << test.getValue() << endl;
}
int main() {

	Test test1(10);
	test(test1);

	return 0;
}
