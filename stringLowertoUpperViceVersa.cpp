#include <iostream>
#include <string>
using namespace std;

void toggleCase(string& input) {
	for(int i=0; i<input.length(); i++) {
		if(islower(input[i])){
			input[i]=toupper(input[i]);
		}
		else if(isupper(input[i])) {
			input[i]=tolower(input[i]);
		}
	}
}

int main(){
	string input;
	cout<<"Enter string : ";
	cin>>input;
	//getline(cin, input);
	toggleCase(input);

	cout<<"After :"<<input;
	return 0;
}

