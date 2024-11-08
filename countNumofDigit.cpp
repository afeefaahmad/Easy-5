#include <iostream>

using namespace std;

int findnumDigits(int num) {
	int count=0;
	while(num!=0){
		int rem = num%10;
		num=num/10;
		count++;
	}
	return count;
}
int main() {
	int n1;
	cin>>n1;
	
	int numDigits = findnumDigits(n1);
	cout<<"The number of digits :"<<numDigits;

	return 0;
}
