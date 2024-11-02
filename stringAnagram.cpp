#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isAnagram(string& input1, string& input2) {
	if(input1.length() != input2.length()) {
		return false;
	}
	string sortedString1 = input1;
	string sortedString2 = input2;
	
	sort(sortedString1.begin(),sortedString1.end());
	sort(sortedString2.begin(),sortedString2.end());		
	
	return sortedString1 == sortedString2;

}
		
int main() {
	string input1, input2;
	cout<<"Enter string1 :";
	cin>>input1;
	cout<<"Enter string2 :";
	cin>>input2;
	
	if(isAnagram(input1, input2)) {
		cout<<"It's anagram";
	}
	else {
		cout<<"Not anagram ";
	}
	return 0;
}
