#include <cstdio>
#include <cstring>
using namespace std;

int main() {
	int n, a[10005], sum = 0, f[10005], x = 0, y = 0;
	memset(f, -1, sizeof(f));
	f[0] = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; ++i) {
		scanf("%d", &a[i]);
		sum += a[i];
		if (sum >= n) {
			sum %= n;
		}
		if (f[sum] != -1) {
			x = f[sum];
			y = i;
			break;
		}
		else {
			f[sum] = i;
		}
	}
	printf("%d\n", y-x);
	for (int i = x+1; i <= y; ++i) {
		printf("%d\n", a[i]);
	}
}