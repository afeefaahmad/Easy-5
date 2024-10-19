#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number :";;
    cin>>num;
    
    int sum=0;
    sum=(num*(num+1))/2;
    cout<<"Sum of numbers :" ;
    cout<<sum;
    
    return 0;
}
--------------------------------------------
#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number :";;
    cin>>num;
    
    int sum=0;
    for(int i=0;i<=num;i++){
        sum=sum+i;
    }
    cout<<"Sum of numbers :" ;
    cout<<sum;
    
    return 0;
}
