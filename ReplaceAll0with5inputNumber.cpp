#include <iostream>
using namespace std;

int convert0To5Rec(int num){
    if (num==0)
        return 0;
    else{
        int digit = num%10;
        if(digit==0){
            digit=5;
        }
        return convert0To5Rec(num/10)*10+digit;
    }
     
}
int convert0To5(int num){
    if(num==0)
        return 5;
    else{
        return convert0To5Rec(num);
    }
}

int main(){
    int num;
    cout<<"Enter a number :";
    cin>>num;
    cout<<convert0To5(num);
    return 0;
    
}


-----------------------------------------------

  Example Walkthrough:
Suppose the input is 10120.

First call to convert0To5Rec(10120):

digit = 10120 % 10 = 0 → change digit to 5.
Call convert0To5Rec(1012) and return convert0To5Rec(1012) * 10 + 5.
Second call to convert0To5Rec(1012):

digit = 1012 % 10 = 2.
Call convert0To5Rec(101) and return convert0To5Rec(101) * 10 + 2.
Third call to convert0To5Rec(101):

digit = 101 % 10 = 1.
Call convert0To5Rec(10) and return convert0To5Rec(10) * 10 + 1.
Fourth call to convert0To5Rec(10):

digit = 10 % 10 = 0 → change digit to 5.
Call convert0To5Rec(1) and return convert0To5Rec(1) * 10 + 5.
Fifth call to convert0To5Rec(1):

digit = 1 % 10 = 1.
Call convert0To5Rec(0) and return convert0To5Rec(0) * 10 + 1.
Sixth call to convert0To5Rec(0):

Base case reached; return 0.
Now, working backwards through the recursion:

convert0To5Rec(1) = 0 * 10 + 1 = 1
convert0To5Rec(10) = 1 * 10 + 5 = 15
convert0To5Rec(101) = 15 * 10 + 1 = 151
convert0To5Rec(1012) = 151 * 10 + 2 = 1512
convert0To5Rec(10120) = 1512 * 10 + 5 = 15125
