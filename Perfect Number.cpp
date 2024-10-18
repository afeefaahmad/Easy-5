
#include <iostream>
using namespace std;


bool isPerfect(long int n){
    long int sum=1;
    for(long int i=2;i*i<=n;i++ ){
        if(n%i==0){
            if(i*i!=n){
                sum=sum+i+n/i;
            }
            else{
                sum=sum+i;
            }
        }
        
    }
    if(sum==n && n!=1){
        return true;
    }
    return false;
}
int main()
{
    int n;
    cout<<"Enter a number :";
    cin>>n;
    
    if(isPerfect(n)){
        cout<<"It's a perfect number";
    }
    else{
        cout<<"Not a perfect number";
    }

    return 0;
}
