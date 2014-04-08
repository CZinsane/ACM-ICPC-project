#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int a[100005], n, t;
	a[0] = 0;
	cin>>n;
	for (int i = 1; i <= n; ++i) {
		cin>>t;
		a[i] = a[i-1] + t;
	}
	int x, y, mid;
	cin>>x>>y;
	if (x < y) {
		mid = (x+y)>>1;
		cout<<a[mid]<<" "<<a[n]-a[mid]<<endl;
	}
	else if (x == y) {
		x = max(a[n]-a[x-1], a[x]);
		y = a[n] - x;
		cout<<x<<" "<<y<<endl;
	}
	else {
		mid = (x+y)>>1;
		if (x-mid <= mid-y) {
			--mid;
		}
		cout<<a[n]-a[mid]<<" "<<a[mid]<<endl;
	}
}