//sort 0,1,2 Dutch national flag
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sortArray(vector<int> &arr) {
	int low=0;
	int high=arr.size() - 1;
	int mid=0;

	while(mid < high) {
		if(arr[mid]==0) {
			swap(arr[mid],arr[low]);
			low++; mid++;
		}
		else if(arr[mid]==1) {
			mid++;
		}
		else if(arr[mid]==2) {
			swap(arr[mid],arr[high]);
			high--;
		}
	}
}
int main() {
	int n;
	cout<<"Size of array :";
	cin>>n;

	vector<int> arr(n);
	cout<<"Enter values for array :";
	for(int i=0; i<n; i++) {
		cin>>arr[i];
	}

	sortArray(arr);	
	cout<<"Array after sorting into 0, 1 and 2 is: ";	
	for(int i=0; i<n; i++) {
		cout<<arr[i];
	}

	return 0;
}
		
