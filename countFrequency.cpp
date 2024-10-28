#include <iostream>
#include <vector>
using namespace std;

void findFrequency(vector<int> &arr) {
	int frequency[10] = {0};    //array to keep track of frequencies
	for(int i=0; i<arr.size(); i++) {
		frequency[arr[i]]++;
	}
	for(int i=0; i<arr.size(); i++) {   //iterating original array to find frequency
 		if(frequency[i]>0) {
			cout<<"Element= "<<i<<" frequency: "<<frequency[i]<<endl;
		}
	}
	
}
int main() {
	int n;
	cout<<"Enter the number of elements in array : ";
	cin>>n;

	vector<int> arr(n);
	cout<<"Enter elements of array: ";
	for(int i=0; i<n; i++) {
		cin>>arr[i];
	}
	
	cout<<"Frequency of elememnts : "<<endl;
	 findFrequency(arr);

	return 0;

}
