#include <stdio.h>
#define lowbit(x) (x&(-x))
#define MaxN 100005

long long i, j, n, m, l, r, sum, v;
long long o[MaxN], d[MaxN], di[MaxN];
char c;

long long query(long long * x, long long y) {
	long long tmp = 0;
	for (; y; y -= lowbit(y)) {
		tmp += x[y];
	}
	return tmp;
}

int main() {
	scanf("%lld%lld", &n, &m);
	for (i = 0; i < n;) {
		scanf("%lld", &j);
		o[++i] = o[i-1] + j;
	}
	for (j = 0; j < m; ++j) {
		getchar();
		scanf("%c", &c);
		if (c == 'Q') {
			scanf("%lld%lld", &l, &r);
			sum =o[r] - o[l-1];
			sum += ((r+1) * query(d, r) - l * query(d, l-1));
			sum -= (query(di, r) - query(di, l-1));
			printf("%lld\n", sum);
		}
		else {
			scanf("%lld%lld%lld", &l, &r, &v);
			for (i = l; i <= n; i+= lowbit(i)) {
				d[i] += v;
				di[i] += v * l;
			}
			for (i = r+1; i <= n; i += lowbit(i)) {
				d[i] -= v;
				di[i] -= (v * r + v);
			}
		}
	}
}
