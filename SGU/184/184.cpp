#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int a[3], b[3];
	for (int i = 0; i < 3; ++i) {
		cin>>a[i];
	}
	for (int i = 0; i < 3; ++i) {
		cin>>b[i];
	}
	int ans = 99999999;
	for (int i = 0; i < 3; ++i) {
		ans = min(ans, a[i]/b[i]);
	}
	cout<<ans<<endl;
}