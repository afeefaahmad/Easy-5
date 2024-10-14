#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"enter number ";
    cin>>num;
    
    //positive, negative, zero
    if(num>0){
        cout<<"\n positive";
    }
    else if(num==0){
        cout<<"\n zero";
    }
    else {
        cout<<"\n negative";
    }
    //even,odd
    if(num%2==0){
        cout<<"\n even";
    }
    else if(num%2!=0){
        cout<<"\n odd";
    }
    return 0;
}
