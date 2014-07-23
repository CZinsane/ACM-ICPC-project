#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int c[1300], cnt[1300], pri[1300], n, m, k, pn, t, ans = 0;
	bool flag[10005], f;
	memset(flag, 0, sizeof(flag));
	memset(c, 0, sizeof(c));
	pn = 0;
	for (int i = 2; i <= 10001; ++i) {
		if (!flag[i]) {
			pri[pn++] = i;
			for (int j = i; j <= 10001; j += i) {
				flag[j] = true;
			}
		}
	}
	cin>>n>>m>>k;
	for (int j = 0; j < pn; ++j) {
		while (k % pri[j] == 0) {
			k /= pri[j];
			++c[j];
		}
	}
	for (int i = 0; i < n; ++i) {
		f = true;
		cin>>t;
		for (int j = 0; j < pn; ++j) {
			cnt[j] = 0;
			while (t % pri[j] == 0) {
				t /= pri[j];
				++cnt[j];
			}
			if (c[j] > cnt[j]*m) {
				f = false;
				break;
			}
		}
		if (f) {
			++ans;
		}
	}
	cout<<ans<<endl;
}