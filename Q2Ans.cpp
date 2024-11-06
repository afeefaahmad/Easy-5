#include <iostream>
#include <vector>
using namespace std;

int findCross(vector<int> &arr, int t){
    int count;
    for(int i=0; i<t; i++){
        for(int j=i; j<t; j++){
            if(arr[i]==0 && arr[j]==1){
                count++;
            }
        }
    }
    return count;
}
int main() {
    int t;
    cin>>t;
    vector<int> arr(t);
    for(int i=0; i<t; i++){
        cin>>arr[i];
    }
    int result=findCross(arr,t);
    cout<<result;
    return 0;
}
