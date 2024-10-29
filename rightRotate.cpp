//Right rotate an array by k elements
#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int> &arr, int start, int end) {
	while(start <end){
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
	
}
void rightRotate(vector<int> &arr, int k) {
	int n = arr.size();
	k = k%n;	
	reverseArray(arr, 0, n-1);
	reverseArray(arr, 0, k-1);
	reverseArray(arr, k, n-1);


}
int main() {
	int n,k;
	cout<<"Number of terms : ";
	cin>>n;
	cout<<"Enter value of k :";
	cin>>k;

    cout<<"Enter elements of array: ";
	vector<int> arr(n);
	for(int i=0; i<n; i++) {
		cin>>arr[i];
	}

	rightRotate(arr,k);
	cout<<"After right rotate :";
	for(int i=0; i<n; i++) {
		cout<<arr[i];
	}

	return 0;
}
