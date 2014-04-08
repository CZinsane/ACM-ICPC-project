#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

int i, j, k, l, m, n, tmp, ans;
int map[500][500];
int fa[500];

struct edge_map{
	int v;
	int e,s;
}edge[125000];

int max(int a, int b) {
	return (a > b ? a : b);
}

int get(int x) {
	while (fa[x] != x)
		x = fa[x];
	return x;
}

bool cmp(edge_map a,edge_map b){
	return (a.v<b.v);
}

int main() {
	scanf("%d", &l);
	for (k = 0; k < l; k++) {
		scanf("%d", &n);
		m = -1;
		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++) {
				scanf("%d", &map[i][j]);
				if (i < j) {
					m++;
					edge[m].v = map[i][j];
					edge[m].s = i;
					edge[m].e = j;
				}
			}
			fa[i] = i;
		}
		stable_sort(edge,edge+m+1,cmp);
		ans = 0;
		for (i = 0; i <= m; i++) {
			if (get(edge[i].s) != get(edge[i].e)) {
				ans = max(ans, edge[i].v);
				fa[get(edge[i].s)] = get(edge[i].e);
			}
		}
		printf("%d\n", ans);
	}
}