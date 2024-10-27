#include <iostream>
#include <vector>

using namespace std;

int findSmallest(vector<int> &arr) {
    int n = arr.size();
    int smallest = arr[0];
    for(int i = 1; i < n; i++) {
        if(smallest > arr[i]) {
            smallest = arr[i];
        }
    }
    return smallest;
}

int main() {
    int n;
    cout << "Enter number of elements in array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter elements of array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Smallest number in array: " << findSmallest(arr);
    return 0;
}
