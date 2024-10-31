
#include <iostream>
#include <vector>
using namespace std;

int uniqueElement(vector<int> &arr) {
    int unique=0;
	for(int i=0; i<arr.size(); i++) {
		
		unique^=arr[i];	
	}
	return unique;
}	
int main() {
	int n;
	cout<<"Enter number of elements in array :";
	cin>>n;

	vector<int> arr(n);
	cout<<"enter terms of array :";
	for(int i=0; i<n; i++) {
		cin>>arr[i];
	}
	cout<<"Unique element of array is : "<<uniqueElement(arr);
	

	return 0;
}
