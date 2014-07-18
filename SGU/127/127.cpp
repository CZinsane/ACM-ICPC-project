#include <iostream>
using namespace std;


int k, n, a[10], t, ans;

int main() {
	cin>>k>>n;
	for (int i = 0; i < n; ++i) {
		cin>>t;
		t /= 1000;
		++a[t];
	}
	ans = 2;
	for (int i = 0; i < 10; ++i) {
		ans += a[i]/k + 1*(a[i]%k != 0);
	}
	cout<<ans<<endl;
}