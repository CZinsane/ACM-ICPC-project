#include <iostream>
using namespace std;

int main() {
	long long k, p;
	while (cin>>k>>p) {
		--p;
		k /= p;
		if (k & 1) {
			cout<<"YES"<<endl;
		}
		else {
			cout<<"NO"<<endl;
		}
	}
}