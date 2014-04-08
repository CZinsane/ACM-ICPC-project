#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;

#define lowbit(x) (x&(-x))

long long i, j, n, m, x, y, a, l, r, b, t, ans;
long long f[1050][1050];

long long sum(long long x, long long y) {
	long long tmp = 0;
	for (int i = x; i; i -= lowbit(i)) {
		for (int j = y; j; j-= lowbit(j)) {
			tmp += f[i][j];
		}
	}
	return tmp;
}

int main() {
	while (cin>>n) {
		if (!n) {
			scanf("%lld", &m);
			++m;
			memset(f, 0, sizeof(f));
		}
			else if (n == 1) {
			scanf("%lld%lld%lld", &x, &y, &a);
			++x;
			++y;
			for (i = x; i <= m; i += lowbit(i)) {
				for (j = y; j <= m; j += lowbit(j)) {
					f[i][j] += a;
				}
			}
		}
		else if (n == 2) {
			scanf("%lld%lld%lld%lld", &l, &b, &r, &t);
			printf("%lld\n", sum(r+1, t+1)-sum(r+1, b)-sum(l, t+1)+sum(l, b));
		}
		else return 0;
	}
}
