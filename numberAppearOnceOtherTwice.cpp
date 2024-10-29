//find number with single occurence in an array
#include <iostream>
#include <vector>
using namespace std;

int uniqueElement(vector<int> &arr) {
	int unique = 0;
	for(int i=0; i<arr.size(); i++) {
		unique = unique ^ arr[i];
	}
	return unique;
}

int main() {
	int n;
	cout<<"Enter number : ";
	cin>>n;

	vector<int> arr(n);
	cout<<"Enter array : ";
	for(int i=0; i<n; i++) {
		cin>>arr[i];
	}

        cout<<"unique element :"<<uniqueElement(arr);
	
	return 0;
}
