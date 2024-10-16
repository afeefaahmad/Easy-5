#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number :";
    cin>>num;
    
    if(sqrt(num)*sqrt(num) == num){
        cout<<"It's a perfect square";
    }
    else{
        cout<<"Not a perfect square";
    }
    return 0;
}

--------------------Leetcode------------------
class Solution {
public:
    bool isPerfectSquare(int num) {
       for (long i = 0; i * i >= 0 && i * i <= num; i ++) {
            if (i * i == num) {
                return true;
            }
        }
        return false;
    }

};
