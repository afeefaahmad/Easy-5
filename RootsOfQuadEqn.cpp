#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int root1,root2,root;
    int a,b,c;
    cout<<"For quadratic equation ax*x+b*x+c provide a,b,c  :";
    cin>>a;
    cin>>b;
    cin>>c;
    
    double d=b*b-(4*a*c);
    if(d>0){
        cout<<"Roots are real and distinct \n";
        root1= (-b+sqrt(d))/2*a;
        root2= (-b-sqrt(d))/2*a;
        cout<<"Roots are :";
        cout<<root1<<","<<root2;
    }
    else if(d==0){
        cout<<"Roots are equal i.e. ";
        root= -b/(2*a);
        cout<<root;
    }
    else{
        long double real= -(double)b/(2*a);
        long double imaginary = sqrt(abs(d))/(2*a);
        cout<<"Roots are imaginary and distinct";
        cout<<"\nRoots are:";
        cout<<real<<"+i"<<imaginary<<",";
        cout<<real<<"-i"<<imaginary;
        
    }
    return 0;
}
