#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

long long i, j, k, m, n, minn, l, I, R, x, y;
vector<long long> e[50005];
long long dp[50005], num[50005];
set<long long> ans;
bool flag[50005];
set<long long>::iterator iter;

void DFS1(long long x) {
	dp[x] = 0;
	num[x] = 1;
	flag[x] = true;
	vector<long long>::iterator it;
	for (it = e[x].begin(); it != e[x].end(); ++it) {
		if (!flag[*it]) {
			DFS1(*it);
			dp[x] += dp[*it] + num[*it];
			num[x] += num[*it];
		}
	}
}

void DFS2(long long x) {
	vector<long long>::iterator it;
	flag[x] = true;
	if (dp[x] < minn) {
		ans.clear();
		ans.insert(x);
		minn = dp[x];
	}
	else if (dp[x] == minn) {
		ans.insert(x);
	}
	for (it = e[x].begin(); it != e[x].end(); ++it) {
		if (!flag[*it]) {
			dp[*it] = dp[x] + n - 2 * num[*it];
			DFS2(*it);
		}
	}
}

int main() {
	cin>>l;
	while (l--) {
		minn = 2147483648;
		scanf("%lld%lld%lld", &n, &I, &R);
		for (i = 0; i < n; ) {
			e[++i].clear();
		}
		memset(dp, 0, sizeof(dp));
		memset(num, 0, sizeof(num));
		memset(flag, false, sizeof(flag));
		for (i = 1; i < n; i++) {
			scanf("%lld%lld", &x ,&y);
			e[x].push_back(y);
			e[y].push_back(x);
		}
		DFS1(1);
		memset(flag, false, sizeof(flag));
		DFS2(1);
		printf("%lld\n", minn * I * I * R);
		for (iter = ans.begin(); iter != ans.end(); ) {
			printf("%lld", *iter);
			iter++;
			if (iter == ans.end()) {
				printf("\n");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
}
