#include<stdio.h>

int i, j, n, m;
long long ans;

int main() {
	while (scanf("%d%d", &n, &m) != EOF) {
		if(!n&&!m)
			return 0;
		ans = 1;
		if (n - m < m)
			m = n - m;
		for (i = 1; i <= m; i++) {
			ans*=(n-i+1);
			ans/=i;
		}
		printf("%lld\n",ans);
	}
	return 0;
}