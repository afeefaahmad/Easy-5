#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number ";
    cin>>n;
    int temp=n;
    int r;
    
    while(temp>0){
       int last_digit = temp%10;
        r=r*10+last_digit;
        temp=temp/10;
    }
    cout<<"Reverse of number is:";
    cout<<r;
    
    return 0;
    
}
