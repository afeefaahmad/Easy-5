#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int> &arr, int n) {
	int missing;
	int totalSum = (n+1)*(n+2)/2;
	int arraySum = 0;

	for(int i=0; i<n; i++) {
		arraySum += arr[i];
	}
	
	return missing = totalSum - arraySum;		
}		
int main() {
	int n;
	cout<<"Enter number of terms in array :" ;
	cin>>n;
	
	vector<int> arr(n);
	cout<<"Enter elements of array : ";
	for(int i=0; i<n; i++) {
		cin>>arr[i];
	}
	cout<<"missing number : "<<missingNumber(arr,n);

	return 0;
}

