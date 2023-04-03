#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
    	if(x<0) {
    		return false;
    	}
    	string str = to_string(x);
    	for(int i=0; i<str.length()/2;i++){
    		if(str[i] != str[str.length()-1-i]){
    			return false;
    		}
    	}
    	return true;
    }
};
int main() {
	Solution s;
	s.isPalindrome(121);

	return 0;
}
