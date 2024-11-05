//Pangram
#include <iostream>
#include <string>
#include <set>

using namespace std;

bool isPangram(string& sentence, string& missingChar) { 
	set<char> alphabetSet;	

  //loop1 :for inserting values into set
	for(int i=0; i<sentence.length(); i++) {
		alphabetSet.insert(sentence[i]);
	}
	missingChar.empty();

  //loop2: for checking missing character in set
	for(char ch='a'; ch<='z'; ch++) {
		if(alphabetSet.find(ch)==alphabetSet.end()) {
			missingChar+=ch;
		}
	}

	return sentence.empty();
}
int main() {
	string sentence;
	cout<<"write sentence:";
	getline(cin,sentence);
	
	string missingChar;
	if(isPangram(sentence,missingChar)) {
		cout<<0<<endl;
	}
	else{
		cout<<missingChar<<endl;
	}

	return 0;
}
