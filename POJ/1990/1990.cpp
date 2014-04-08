#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;

#define lowbit(x) (x&(-x))

typedef struct node {
	long long v, x;
};

long long d, c, i, j, m, n, l, maxx, ans, total;
long long dt[20005], ct[20005];
vector<node> cow;
node tmp;

bool cmp(node a, node b) {
	return a.v < b.v;
}

long long sum(long long x, long long * t) {
	long long tmp = 0;
	for (; x; x -= lowbit(x)) {
		tmp += t[x];
	}
	return tmp;
}

int main() {
	cin>>n;
	memset(ct, 0, sizeof(ct));
	memset(dt, 0, sizeof(dt));
	maxx = 0;
	for (i = 0; i < n; ++i) {
		scanf("%lld%lld", &tmp.v, &tmp.x);
		maxx = max(maxx, tmp.x);
		cow.push_back(tmp);
	}
	sort(cow.begin(), cow.end(), cmp);
	ans = 0;
	total = 0;
	for (i = 0; i < n; i++) {
		d = sum(cow[i].x, dt);
		c = sum(cow[i].x, ct);
		ans += (cow[i].v*(c*cow[i].x - d + total - d - cow[i].x*(i - c)));
		j = cow[i].x;
		for (; j <= maxx; j += lowbit(j)) {
			++ct[j];
			dt[j] += cow[i].x;
		}
		total += cow[i].x;
	}
	cout<<ans<<endl;
}
