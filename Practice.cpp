Q1.REVERSING ARRAY
Q2.LARGEST ELEMENT ARRAY
Q3.SMALLEST ELEMENT ARRAY
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
#include <iostream>
#include <vector>

using namespace std;

int largestElement(vector<int> &arr) {
	int largest = arr[0];
	for(int i=1; i<arr.size();i++) {
		if(arr[i]>largest ){
			largest = arr[i];
		}
	}
	return largest;
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
	cout<<"Largest element of array : "<<largestElement(arr);

	return 0;

}

A3.
#include <iostream>
#include <vector>

using namespace std;

int smallestElement(vector<int> &arr) {
	int n= arr.size();
	int smallest= arr[n-1];
	for(int i=0; i<n-1; i++) {
		if(arr[i]<smallest ){
			smallest = arr[i];
		}
	}
	return smallest;
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
	cout<<"Smallest element of array : "<<smallestElement(arr);

	return 0;

}

A4.
  
