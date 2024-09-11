#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number ";
    cin>>n;
    int temp=n;
    int r;
    
    while(temp>0){
        int last_number=temp%10;
        r=r*10+last_number;
        temp=temp/10;
    }
    
    if(n==r)
        cout<<"Palindrome";
    else
        cout<<"Not palindrome";
        
    return 0;
}
