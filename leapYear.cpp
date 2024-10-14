#include <iostream>
using namespace std;

int main(){
    
    int year;
    cout<<"enter year :";
    cin>>year;
    if(year%400==0 || (year%4==0 and year%100 !=0) ){
        cout<<"It's leap year";
    }
    else{
        cout<<"Not a leap year";
    }
    return 0;
}
