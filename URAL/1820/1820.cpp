#include <iostream>
using namespace std;

int main() {
	int n, k;
	cin>>n>>k;
	if (k > n) {
		cout<<2<<endl;
	}
	else {
		n <<= 1;
		cout<<n/k+1*(n % k != 0)<<endl;
	}
}