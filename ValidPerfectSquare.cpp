#include <iostream>
using namespace std;

int main(){
    
    int num;
    cout<<"Enter a number :";
    cin>>num;
    bool isPerfectSquare = false;
    
    for(int i=0;i*i<=num;i++){
        if(i*i==num){
           isPerfectSquare = true;
          break;
        }
        
    }
    if(isPerfectSquare){
        cout<<"It's a perfect square";
    }
    else{
        cout<<"Not a perfect square";
    }
   
    
    
    return 0;
}



----------------------------------Leetcode
  class Solution {
public:
    bool isPerfectSquare(int num) {
       for (long i = 0;  i * i <= num; i ++) {
            if (i * i == num) {
                return true;
            }
        }
        return false;
    }

};
