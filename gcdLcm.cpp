#include <iostream>
#include <cmath>
using namespace std;

int findGcd(int n1, int n2) {
    //gcd(a,b)=gcd(b,a%b) until one num becomes zero hence other becomes gcd
	while(n2!=0) {
	int temp = n2;
	n2 = n1%n2;
	n1 = temp;
	}
	return n1;
}
int findLcm(int n1, int n2) {
	int gcd = findGcd(n1, n2);
	//lcm*gcd==n1*n2
	int res=(n1*n2)/gcd;

	return res;

}
int main() {
	int n1, n2;
	cin>>n1;
	cin>>n2;
	int gcd = findGcd(n1, n2);
	cout<<"Gcd :"<<gcd<<endl;
	int lcm = findLcm(n1, n2);
	cout<<"Lcm :"<<lcm;
	

	return 0;
}
