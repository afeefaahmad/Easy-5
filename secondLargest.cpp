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


-----------------------------------------------------------------------------------------------------------------------------------
    1.Without considering having no second largest element i.e. when all elements equal
    2.Wihtout considering if only on element i.e. single element

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int findSecondLargest(vector<int> &arr){
    int largest = INT_MIN;
    int secondLargest = INT_MIN;
    
    for(int i=0; i<arr.size(); i++) {
        if(arr[i]>largest){
            secondLargest = largest;
            largest = arr[i];
        }
        if(arr[i]>secondLargest && arr[i]<largest) {
            secondLargest = arr[i];
        }
    }
    
    return secondLargest;
}
int main() {
    int n;
    cout<<"Enter number of elemnts in array : ";
    cin>>n;
    
    vector<int> arr(n);
    cout<<"Enter elemnts of array :";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    
    int answer = findSecondLargest(arr);
    cout<<"Second largest is: "<<answer;
    
    return 0;
}
