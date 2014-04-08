#include <stdio.h>
#include <string.h>

int num[10001], ori[10001];

int main() {
	int i, n, m = 0, x = 0, y = 0, flag = 0;
	scanf("%d", &n);
	memset(num, -1, sizeof(num));
	for (i = 0; i < n; ++i) {
		scanf("%d", &ori[i]);
		m += ori[i];
		m %= n;
		if ((!m || num[m]+1) && !flag) {
			x = num[m]+1;
			y = i+1;
			flag = 1;;
		}
		else {
			num[m] = i;
		}
	}
	printf("%d\n", y - x);
	for (i = x; i < y; ++i) {
		printf("%d\n", ori[i]);
	}
}