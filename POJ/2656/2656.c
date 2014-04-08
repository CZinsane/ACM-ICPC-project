#include <stdio.h>

int a, b, n, i;

int main(){
	while(scanf("%d", &n)&&n) {
		int maxday, maxvalue = -1;
		for (i = 0; i < n; i++) {
			scanf("%d%d", &a, &b);
			if (a + b > maxvalue) {
				maxvalue = a + b;
				maxday = i + 1;
			}
		}
		maxvalue < 9? printf("0\n"):printf("%d\n", maxday);
	}
	return 0;
}