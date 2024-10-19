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

---------------------------------------------------------------------------
//Armstrong number for any number of digits.

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int rem,curr_num,num,result=0,num_digits;
    cout<<"Enter number :";
    cin>>num;
    curr_num = num;
    while(curr_num!=0){
        rem=curr_num%10;
        curr_num=curr_num/10;
        num_digits++;
    }
    curr_num=num;
    while(curr_num!=0){
        rem=curr_num%10;
        result+= pow(rem,num_digits);
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
