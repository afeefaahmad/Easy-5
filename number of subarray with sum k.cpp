//Find number of subarray with sum k

#include <iostream>
#include <vector>
using namespace std;

int findCount(vector<int> &arr,int sum) {
	int res = 0;
	for(int i=0; i<arr.size(); i++) {
		int tempSum = 0;
		for(int j=i; j<arr.size(); j++) {
			tempSum += arr[j];
		
		if(tempSum == sum) {
			res++;
			}
		}
	}
	return res;		
}
int main() {
	int n;
	cout<<"Enter number of terms :";
	cin>>n;
	
	int sum;
	cout<<"Enter sum :";
	cin>>sum;

	vector<int> arr(n);
	cout<<"Enter terms of array :";
	for(int i=0; i<n; i++) {
		cin>>arr[i];
	}
	cout<<"Count"<<findCount(arr, sum);
	return 0;
}
