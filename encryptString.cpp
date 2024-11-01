#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string encryptString(string& input) { 
	string compressed = " ";
	int count=1;
	
	for(int i=1; i<input.length(); i++){
		if(input[i] == input[i-1]) {
			count++;
		}
		else{
			compressed+= input[i-1] + to_string(count);
			count=1;	
		}
	}

	reverse(compressed.begin(), compressed.end());
	
	return compressed;
}
int main() {
	string input;
	cout<<"Enter string :";
	cin>>input;

	cout<<"String after encryption becomes : ";
	cout<<encryptString(input);



	return 0; 
}
