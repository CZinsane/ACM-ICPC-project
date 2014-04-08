#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;

int i, j, k, n, m, l;
int a[101];
int f[101][101];

int DP(int x, int y) {
	if (y - x < 2) {
		return 0;
	}
	else {
		if (f[x][y]) {
			return f[x][y];
		}
		int ans = 2147483000;
		for (int t = x+1; t < y; ++t) {
			ans = min(ans, DP(x, t) + DP(t, y) + a[x] * a[t] * a[y]);
		}
		f[x][y] = ans;
		return ans;
	}
}

int main() {
	cin>>n;
	memset(f, 0, sizeof(f));
	for (i = 0; i < n; ++i) {
		cin>>a[i];
	}
	cout<<DP(0, n-1)<<endl;
}
