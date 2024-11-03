#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string commonPre(vector<string>& strs) {
	sort(strs.begin(),strs.end());
	string first=strs[0];
	string last=strs[strs.size()-1];
	int i=0;
	while(i <first.size() && first[i]==last[i]) {
		i++;
	}
	string prefix = first.substr(0,i);

	return  prefix.empty() ? "-1":prefix;
}
	
int main() {
	int n;
	cout<<"Enter number of string :";
	cin>>n;
	
	vector<string> strs;
	string str;
	cout<<"Enter string :";
	for(int i=0; i<n; i++) {
		cin>>str;
		strs.push_back(str);
	}
	string result = commonPre(strs);
	cout<<"Longest common prefix: "<<result;

	return 0;
}
