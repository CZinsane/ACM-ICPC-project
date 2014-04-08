#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;

typedef struct node {
	int a, b, x;
};

int ans, i, j, k, m, n, l, p, q, mine, maxe;
vector<node> e;
vector<node>::iterator ait, bit;
int f[101];
bool flag;
node temp;

bool cmp (node u, node v) {
	return u.x < v.x;
}

int find (int x) {
	int t = x, tmp;
	while (x != f[x]) {
		x = f[x];
	}
	while (t != x) {
		tmp = f[t];
		f[t] = x;
		t = tmp;
	}
	return x;
}

int main() {
	while (cin>>n>>m && n) {
		for (i = 0; i < n; ) {
			++i;
			e.clear();
			f[i] = i;
		}
		for (i = 0; i < m; ++i) {
			scanf("%d%d%d", &temp.a, &temp.b, &temp.x);
			e.push_back(temp);
		}
		sort(e.begin(), e.end(), cmp);
		flag = false;
		ans = 99999999;
		for (ait = e.begin(); ait != e.end(); ++ait) {
			l = 1;
			for (i = 0; i < n; ) {
				++i;
				f[i] = i;
			}
			mine = 99999999;
			maxe = -1;
			for (bit = ait; bit != e.end(); ++bit) {
				p = find((*bit).a);
				q = find((*bit).b);
				if (q != p) {
					++l;
					f[q] = p;
					mine = min(mine, (*bit).x);
					maxe = max(maxe, (*bit).x);
				}
			}
			if (l == n) {
				flag = true;
				ans = min(ans, maxe - mine);	
			}
		}
		if (flag) {
			printf("%d\n", ans);
		}
		else {
			printf("-1\n");
		}
	}
}
