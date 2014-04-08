#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;

typedef struct node {
	int a, b, x;
};

int l, i, j, k, m, n, v, u, ans;
vector<node> e;
vector<node>::iterator it, iter;
int f[105];
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
	cin>>l;
	while (l--) {
		e.clear();
		scanf("%d%d", &n, &m);
		for (i = 0; i < m; ++i) {
			scanf("%d%d%d", &temp.a, &temp.b, &temp.x);
			e.push_back(temp);
		}
		for (i = 0; i < n; ) {
			++i;
			f[i] = i;
		}
		ans = 0;
		flag = false;
		sort(e.begin(), e.end(), cmp);
		for (it = e.begin(); it != e.end(); ++it) {
			u = find((*it).a);
			v = find((*it).b);
			if (u == v) {
				continue;
			}
			else {
				iter = it;
				++iter;
				for ( ; iter != e.end(); ++iter) {
					if ((*iter).x != (*it).x) {
						break;
					}
					int p = find((*iter).a);
					int q = find((*iter).b);
					if (((v == p) && (u == q))||((v == q) && (u == p))) {
						flag = true;
					}
					if (flag) {
						break;
					}
				}
			}
			if (flag) {
				break;
			}
			else {
				f[u] = v;
				ans += (*it).x;
			}
		}
		if (flag) {
			printf("Not Unique!\n");
		}
		else {
			printf("%d\n", ans);
		}
	}
}
