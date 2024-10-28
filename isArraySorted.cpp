#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool isSorted(const vector<int>& arr)
{
    // For an array to be sorted, every
    // element must be greater than the 
    // previous element
    for (int i = 1; i < arr.size(); i++){
        if (arr[i - 1] > arr[i])
            return false;
    }
    return true;
}

// Driver code
int main()
{
    int n;
    cout<<"Enter number of terms in array :";
    cin>>n;
    
    vector<int> arr(n);
    cout<<"Enter terms of array : ";
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    cout << (isSorted(arr) ? "Yes\n" : "No\n");
    return 0;
}
