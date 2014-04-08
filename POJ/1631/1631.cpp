#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;

int i, j, m, n, l;
vector<int> f;
vector<int>::iterator it;

int main() {
	scanf("%d", &l);
	while (l--) {
		f.clear();
		scanf("%d", &n);
		for (i = 0; i < n; ++i) {
			scanf("%d", &m);
			it = lower_bound(f.begin(), f.end(), m);
			if (it == f.end()) {
				f.push_back(m);
			}
			else {
				if (*it > m) {
					*it = m;
				}
			}
		}
		cout<<f.size()<<endl;
	}
}
