#include <iostream>
#include <set>
using namespace std;
int main() {
	set<int> one;
	long long l = 1, n = 1;
	while (n < 2147489999) {
		one.insert(n);
		n += l;
		++l;
	}
	cin>>n;
	while (true) {
		cin>>l;
		if (one.count(l)) {
			cout<<1;
		}
		else {
			cout<<0;
		}
		if (--n) {
			cout<<" ";
		}
		else {
			cout<<endl;
			break;
		}
	}
}