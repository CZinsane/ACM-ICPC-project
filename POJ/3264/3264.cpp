#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;

int i, j, k, m, n, tmp;
int num[50005];
int f[35][50005], g[35][50005];

int main() {
	cin>>n>>m;
	for (i = 1; i <= n; i++) {
		scanf("%d", &num[i]);
		f[0][i] = num[i];
		g[0][i] = num[i];
	}
	k = log2(n);
	for (i = 1; i <= k; i++) {
		for (j = n; j; j--) {
			f[i][j] = f[i-1][j];
			g[i][j] = g[i-1][j];
			if ((j+(1<<(i-1))) <= n) {
				f[i][j] = max(f[i-1][j], f[i-1][j+(1<<(i-1))]);
				g[i][j] = min(g[i-1][j], g[i-1][j+(1<<(i-1))]);
			}
		}
	}
	for (i = 0; i < m; i++) {
		scanf("%d%d", &j, &k);
		n = log2(k-j+1);
		tmp = k - (1<<n) + 1;
		printf("%d\n",max(f[n][j], f[n][tmp])-min(g[n][j], g[n][tmp]));
	}
}
