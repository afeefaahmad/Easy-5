
#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number :";
    cin>>num;
    
    if(num<10){
        cout<<num;
    }
    else{
        while(num>10){
        num=((num/10)+(num%10));
        }
        cout<<num;
        
    }
    return 0;
}
