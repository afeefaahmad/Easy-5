#include <iostream>
using namespace std;


    int main(){
        int n,k;
        cout<<"Enter number of elements ";
        cin>>n;
        int a[n];
        
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        cout<<"Enter value of k ";
        cin>>k;
        
        int temp=a[k-1];
        a[k-1]=a[n-k];
        a[n-k]=temp;
        
        for(int i=0;i<n;i++){
            cout<<a[i];
        }
        
}
