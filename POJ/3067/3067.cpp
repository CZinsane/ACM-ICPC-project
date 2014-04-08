#include <iostream>
#include <algorithm>
#include <cstdio>
#include <vector>
#include <cstring>
using namespace std;

#define lowbit(x) (x&(-x))

typedef struct node {
	long long x, y;
};

long long i, k, l, m, n, ans, currenty;
node temp;
vector<node> a;
long long t[1005];

bool cmp(node a1, node a2) {
	if (a1.x == a2.x) {
		return a1.y<a2.y;
	}
	else return a1.x<a2.x;
}

long long sum(int x) {
	int	tmp = 0;
	while(x > 0) {
		tmp += t[x];
		x -= lowbit(x);
	}
	return tmp;
}

int main() {
	cin>>l;
	long long s = l;
	while (l--) {
		cin>>n>>m>>k;
		ans = 0;
		memset(t, 0, sizeof(t));
		a.clear();
		for (i = 0 ; i < k; i++) {
			scanf("%lld%lld", &temp.x, &temp.y);
			a.push_back(temp);
		}
		sort(a.begin(), a.end(), cmp);
		for (i = 0; i < k; i++) {
			currenty = a[i].y;
			ans += (sum(m) - sum(currenty));
			while (currenty <= m) {
				t[currenty]++;
				currenty += lowbit(currenty);
			}
		}
		printf("Test case %lld: %lld\n", s-l, ans);
	}
}
