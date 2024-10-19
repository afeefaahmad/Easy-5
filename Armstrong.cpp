//Armstrong number for three digits only.

#include <iostream>
using namespace std;

int main(){
    int rem,curr_num,num,result=0;
    cout<<"Enter number :";
    cin>>num;
    curr_num = num;
    while(curr_num!=0){
        rem=curr_num%10;
        result+=rem*rem*rem;
        curr_num=curr_num/10;
    }
    if(result==num){
        cout<<"Armstrong";
    }
    else{
        cout<<"Not armstrong";
    }
    return 0;
}
