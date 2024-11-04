//Right rotate an array by k number
//step1: reverse entire array
//step2: reverse k digits from start
//step3: revrse k to n digits
 
#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<int> &arr,int start, int end) {
	while(start<end) {
		int temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++; end--;
	}

}
void rightRotate(vector<int> &arr, int k) {
	int n=arr.size();
	k=k%n;
	reverse(arr,0,n-1);
	reverse(arr,0,k-1);
	reverse(arr,k,n-1);

}
int main(){
	int num,k;
	cout<<"Enter number: ";
	cin>>num;
	cout<<"Enter value of k: ";
	cin>>k;
	vector<int> arr(num);	
	cout<<"Enter elements of array: ";
	for(int i=0; i<num; i++){
		cin>>arr[i];
	}
	
	rightRotate(arr,k);
	cout<<"Array after right roatation becomes :";
	for(int i=0; i<num; i++) {
		cout<<arr[i];
	}
	return 0;
}
