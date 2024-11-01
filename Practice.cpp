Q1.REVERSING ARRAY
Q2.
Q3.
Q4.
Q5.



A1.
  #include <iostream>
#include <vector>

using namespace std;

void reverseArray(vector<int> &arr) {
	int left=0;
	int right=arr.size()-1;
	while(left<right) {
		int temp=arr[left];
		arr[left]=arr[right];
		arr[left]=temp;
		left++; right--;
	}
}
int main() {
	int n;
	cout<<"Enter no. of terms: ";
	cin>>n;

	vector<int> arr(n);
	cout<<"Enter elements of array: ";
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	reverseArray(arr):
	cout<<"After reversing array :";
	//direct 
	for(int i=0; i<n; i++){
		cout<<arr[i];
	}

	return 0;

}

A2.
  
