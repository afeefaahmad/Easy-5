//Max subarray sum
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxSubarraySum(vector<int> &arr) {
	int currSum = arr[0];
	int bestSum = arr[0];

	for(int i=0; i<arr.size(); i++) {
		currSum = max(arr[i], currSum + arr[i]);
		bestSum = max(bestSum, currSum);
	}

	return bestSum;
}
int main() {
	int n;
	cout<<"Number of terms : ";
	cin>>n;

	cout<<"Enter elements of array: ";
	vector<int> arr(n);
	for(int i=0; i<n; i++) {
		cin>>arr[i];
	}

	cout<<"maximum subarray sum is :" <<maxSubarraySum(arr);
	return 0;
}
