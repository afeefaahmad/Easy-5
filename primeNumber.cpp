#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "enter a number: ";
    cin >> num;
    bool is_prime = true;
    
    if(num==0||num==1){
        is_prime = false ;
    }

        for(int i=2; i<=num/2; i++){
            if(num%i==0){
                is_prime = false;
                
            }
        }
if(is_prime){
    cout<<"It's prime";
}
else{
    cout<<"Not prime";
}
    return 0;
}
