#include <iostream>
#include <vector>
using namespace std;

int main(){
    
    int n;
    cout<<"enter number of steps: ";
    cin>>n;
    
    if(n==1){
        cout<<"No of ways to climb is 1";
    }
    vector<int> cs(n,0);
    cs[0]=1;
    cs[1]=2;
    
    for(int i=2;i<n;i++){
        cs[i]=cs[i-1]+cs[i-2];
    }
    
    cout<<"number of ways taken are:";
    cout<<cs[n-1];
    
    
    return 0;
}
