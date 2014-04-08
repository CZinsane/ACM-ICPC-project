#include <stdio.h>
#include <string.h>

#define Maxn 501

int i, j, m, n;
int e[Maxn][Maxn];
int flag[Maxn], link[Maxn];

int dfs(int a) {
	for (int i = 0; i < n; ) {
		++i;
		if (!flag[i] && e[a][i]) {
			flag[i] = 1;
			if (link[i] == -1 || dfs(link[i])) {
				link[i] = a;
				return 1;
			}
		}
	}
	return 0;
}

int main() {
	memset(link, -1, sizeof(link));
	scanf("%d%d", &n, &m);
	while (m--) {
		scanf("%d%d", &i, &j);
		e[i][j] = 1;
	}
	int sum = 0;
	for (i = 0; i < n; ) {
		memset(flag, 0, sizeof(flag));
		if (dfs(++i)) {
			++sum;
		}
	}
	printf("%d\n", sum);
	return 0;
}