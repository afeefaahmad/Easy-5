#include <iosteam>
using namespace std;

int timeToCross(int n1, int n2, int x) {
	if(n2<=n1)
		return -1;
	int time = x/(n2-n1);
	if(x%(n2-n1)==0) {
		return time+1;
	}
	else{
		return -1;
	}
}
	
int main( ) {

	int n1, n2, x;
	cin<<n1;
	cin<<n2;
	cin<<x;
	
	int result=timeToCross(n1,n2,x);
	cout<<result;
	return 0;
}
