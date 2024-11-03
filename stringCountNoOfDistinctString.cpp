//count distinct substrings
#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_set>

using namespace std;
int countString(string& input) {
	unordered_set<string> uniqueSubstring;
	
	for(int i=0;i<input.length();i++) {
		string currentSubstring=" ";
		for(int j=i;j<input.length();j++) {
			currentSubstring += input[j];
			uniqueSubstring.insert(currentSubstring);
		}
	}
	return uniqueSubstring.size();
			
}
int main() {
	string input;
	cout<<"Enter string: ";
	cin>>input;

	cout<<"Number of substrings are: ";
	cout<<countString(input);
	return 0;
}
