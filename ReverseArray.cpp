#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements in array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter elements of array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int left = 0;
    int right = n-1;
    
    while(left<right) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left ++;
        right --;
    }
    cout << "Reversed array: ";
    for(int i = 0; i < n; i++) {
        cout <<  arr[i];
    }
    return 0;
}
