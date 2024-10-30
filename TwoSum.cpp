
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int> &arr, int target ) {
	unordered_map<int,int> num_map;
	for(int i=0; i<arr.size(); i++) {
		int complement = target - arr[i];
		if(num_map.find(complement) != num_map.end()) {
			return {num_map[complement], i};
		}
	num_map[num_map[i]] = i;
	}
	return { };
}
int main() {
	int n, target;
	cout<<"Enter value of target: ";
	cin>>target;
	cout<<"Enter no. of terms: ";
	cin>>n;

	vector<int> arr(n);
	cout<<"Enter terms of array :";
	for(int i=0; i<n; i++) {
		cin>>arr[i];
	}
	vector<int> answer = twoSum(arr, target);
	if(!answer.empty()){
		cout<<"Indices are : "<<answer[0] <<" , " <<answer[1];	
	}
	else{
		cout<<"No solution found" ;
	}

	
	return 0;
}
