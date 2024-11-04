Q1.REVERSING ARRAY
Q2.LARGEST ELEMENT ARRAY
Q3.SMALLEST ELEMENT ARRAY
Q4.SECOND LARGEST ELEMENT ARRAY
Q5.SECOND SMALLEST ELEMENT ARRAY
Q6.ARMSTRONG NUMBER
Q7.
Q8.
Q9.
Q10.



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
#include <iostream>
#include <vector>

using namespace std;

int smallestElement(vector<int> &arr) {
	int n= arr.size();
	int smallest= arr[n-1];
	for(int i=0; i<n; i++) {
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

A5.
	#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int SsmallestElement(vector<int> &arr) {
	int n= arr.size();
	int secSmallest=INT_MAX;
	int smallest= arr[n-1];
	for(int i=0; i<n; i++) {
		if(arr[i]<smallest ){
			secSmallest=smallest;
			smallest=arr[i];
		}
		else if(arr[i]>smallest && arr[i]<secSmallest){
			secSmallest = arr[i];
		}
	}
	return secSmallest;
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
	cout<<"Second smallest element of array : "<<SsmallestElement(arr);

	return 0;

}

A6.
	//step1: number of digits;
//step2: result= digits^ num of digits
//step3: check if num==result;

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int num, originalNum,result=0,numDigits;
	cout<<"Enter number: ";
	cin>>num;
	
	originalNum=num;
	//step1: number of digits
	while(originalNum!=0) {
		originalNum=originalNum%10;
		originalNum=originalNum/10;
		numDigits++;
	}
	originalNum=num;
	//step2: calculate result i.e. digits^power
	while(originalNum!=0) {
		int rem=originalNum%10;
		result+=pow(rem,numDigits);
		originalNum=originalNum/10;
		
	}
	cout<<result<<endl;
	 cout<<num;
	if(result==num) {
		cout<<"Armstrong";
	}
	else{
		cout<<"Not";
	}
	
		

	return 0;
}

A7.
	
  
