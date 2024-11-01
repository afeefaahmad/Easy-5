#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string& input) {
	int left=0;
	int right=input.length()-1;
	while(left<right) {
		if(input[left] != input[right]) {
			return false;
		}
		left++; right--;
	}
	return true;
}
int main(){
	string input;
	cout<<"Enter a string :";
	cin>>input;
	
	if(isPalindrome(input)) {
		cout<<"Palindrome";
	}
	else{
		cout<<"Not palindrome";
	}
	
	return 0;
}
