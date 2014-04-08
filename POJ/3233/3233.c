#include <stdio.h>
#include <string.h>

int k, i, j, m, n, l;
int x[63][63], y[63][63];

void multi(int a[63][63], int b[63][63]) {
	int t[63][63];
	memset(t, 0, sizeof(t));
	for (i = 0; i < n; ++i) {
		for (j = 0; j < n; ++j) {
			for (k = 0; k < n; ++k) {
				t[i][j] += a[i][k] * b[k][j];
				t[i][j] %= m;
			}
		}
	}
	memcpy(a, t, sizeof(t));
}

int main() {
	scanf("%d%d%d", &n, &l, &m);
	for (i = 0; i < n; ++i) {
		for (j = 0; j < n; ++j) {
			scanf("%d", &x[i][j]);
		}
	}
	for (i = 0; i < n; ++i) {
		x[i+n][i] = 1;
		x[i+n][i+n] = 1;
		y[i][i] = 1;
		y[i][i+n] = 1;
	}
	n <<= 1;
	for ( ; l; l >>= 1) {
		if (l & 1) {
			multi(y, x);
		}
		multi(x, x);
	}
	n >>= 1;
	for (i = 0; i < n; ++i) {
		y[i][i] = (y[i][i] -1 + m) % m;
	}
	for (i = 0; i < n; ++i) {
		for (j = 0; j < n; ) {
			printf("%d", y[i][j++]);
			if (j == n) {
				printf("\n");
			}
			else {
				printf(" ");
			}
		}
	}
}
