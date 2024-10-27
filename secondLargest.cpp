#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int findSecondLargest(vector<int> &arr) {
    if(arr.size()<2) {
        cout<<"Array must contain atleast two elements";
        return INT_MIN;
    }
    int largest = INT_MIN;
    int secondLargest = INT_MIN;
    
    for(int i=0;i<arr.size();i++) {
        if(arr[i]>largest){
            secondLargest = largest;
            largest = arr[i];
        }
        else if(secondLargest<arr[i] && largest>arr[i]) {
            secondLargest = arr[i];
        }
    }
    //If no second largest elements
    if(secondLargest == INT_MIN) {
        cout<<"NO second largest element found";
        return INT_MIN;
    }
    
    return secondLargest;
}
int main() {
    int n;
    cout<<"Enter number of terms in array :";
    cin>>n;
    
    vector<int> arr(n);
    cout<<"Enter terms of array : ";
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    
    int secondLargest = findSecondLargest(arr);
    if(secondLargest != INT_MIN) {
        cout<<"The second largest element is : "<< secondLargest;
    }
    return 0;
}
