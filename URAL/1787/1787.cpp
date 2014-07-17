#include <iostream>
using namespace std;

int main() {
	int k, n, c, l = 0;
	cin>>k>>n;
	for (int i = 0; i < n; ++i) {
		cin>>c;
		l += c;
		if (l > k) {
			l -= k;
		}
		else {
			l = 0;
		}
	}
	cout<<l<<endl;
}