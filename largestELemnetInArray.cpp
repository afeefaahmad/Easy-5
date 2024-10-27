#include <vector>
#include <iostream>
using namespace std;

int findLargestElement(vector<int>& arr){
    int maxElement = arr[0];
    for(int i=0; i<arr.size(); i++){
        if(arr[i]>maxElement){
            maxElement=arr[i];
        }
    }
    return maxElement;
}

int main(){
    int n;
    cout<<"Enter the number of elements in array: ";
    cin>>n;
    
    vector<int> arr(n);
    cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int largest = findLargestElement(arr);
    cout<<"The largest element is: "<< largest;
    
    return 0;
}
