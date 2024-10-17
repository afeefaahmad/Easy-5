
#include <iostream>
using namespace std;

int main(){
    int term;
    cout<<"Enter term whose you want fibonacci :";
    cin>>term;
    int curr=0;
    int prev_1=0;
    int prev_2=1;
    
    for(int i=2; i<=term;i++) {
    curr = prev_1+prev_2;
    prev_1=curr;
    prev_2=prev_1;
    }
    
    cout << curr;
    return 0;
}
