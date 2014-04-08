#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;

int i, j, m, n, x, y, l, k, ans;
int s[505][1005];
int e[505][505];
int q[5000];
int d[505];
bool flag, t;
bool inq[505];

bool cmp(int x, int y) {
	return x<y;
}

int main() {
	while (scanf("%d%d", &n, &m)!=EOF) {
	for (i = 0; i < m; ++i) {
		scanf("%d", &s[0][i]);
	}
	sort(s[0], s[0]+m, cmp);
	for (i = 1; i <= n; ++i) {
		for (j = 0; j < m; ++j) {
			scanf("%d", &s[i][j]);
		}
		sort(s[i], s[i]+m, cmp);
		for (j = 0; j < i; ++j) {
			if (s[i][0] == s[j][0]) {
				e[i][j] = 0;
				e[j][i] = 0;
				continue;
			}
			t = (s[i][0] < s[j][0]);
			flag = true;
			for (k = 1; k < m; ++k) {
				if (s[i][k] == s[j][k]) {
					flag = false;
					break;
				}
				if (t == (s[i][k] < s[j][k])) {
					continue;
				}
				else {
					flag = false;
					break;
				}
			}
			if (t) {
				e[i][j] = t * flag;
				e[j][i] = -t * flag;
			}
			else {
				t = true;
				e[i][j] = -t * flag;
				e[j][i] = t * flag;
			}
		}
	}
	i = -1;
	j = 0;
	q[0] = 0;
	ans = 0;
	memset(d, 0, sizeof(d));
	memset(inq, false, sizeof(inq));
	inq[0] = true;
	while (i++ < j) {
		for (k = 0; k <= n; k++) {
			if (e[q[i]][k] > 0) {
				if (d[k] < d[q[i]] + e[q[i]][k]) {
					d[k] = d[q[i]] + e[q[i]][k];
					if (!inq[k]) {
						q[++j] = k;
						inq[k] = true;
					}
				}
			}
		}
		inq[q[i]] = false;
	}
	for(i = 1; i <= n; i++) {
		ans = max(ans, d[i]);
	}
	if (ans) {
		printf("%d\n", ans);
	}
	else {
		printf("Please look for another gift shop!\n");
	}
	}
}
