
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number :";
    cin>>num;
    int temp = num-1;
    int result=1;
    
    while(temp>0){
        result= result*temp;
        temp--;
    }
    cout<<"Nunber of arrangements are: ";
    cout<<result;

    return 0;
}
