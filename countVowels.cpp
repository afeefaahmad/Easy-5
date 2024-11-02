#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int numVowel(string& input) {
	int count=0;
	
	for(int i=0; i<input.length(); i++) {
	    char ch=tolower(input[i]);
		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') {
			count++;
		}
	}
	return count;
}
int main(){
	string input;
	cout<<"Enter string : ";
	cin>>input;
	
	cout<<"Number of vowels are :";
	cout<<numVowel(input);	
	return 0;
}
