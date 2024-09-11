#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number ";
    cin>>n;
    int temp=n;
    int r;
    int sum=0;
    
    while(temp>0){
        int last_number=temp%10;
        temp=temp/10;
        sum=sum+last_number;
    }
    int temp2=sum;
    while(temp2>0){
        int last_number=temp2%10;
        r=r*10+last_number;
        temp2=temp2/10;
    }
    
    if(sum==r)
        cout<<sum<<" is Palindrome";
    else
        cout<<sum<<" Not palindrome";
        
    return 0;
}
