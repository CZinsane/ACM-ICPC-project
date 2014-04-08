#include <iostream>
#include <algorithm>
#include <map>
#include <string>
using namespace std;

int i, j, n, m, k;
double e[31][31];
double t;
string name, a, b;
map<string, int> number;

int main() {
	int l = 0;
	while (cin>>n && n) {
		++l;
		number.clear();
		for (i = 0; i < n; ) {
			cin>>name;
			number[name] = ++i;
		}
		for (i = 1; i <= n; ++i) {
			for (j = 1; j <= n; ++j) {
				e[i][j] = -1;
			}
			e[i][i] = 1;
		}
		cin>>m;
		for (i = 0; i < m; ++i) {
			cin>>a>>t>>b;
			e[number[a]][number[b]] = t;
		}
		for (k = 1; k <= n; ++k) {
			for (i = 1; i <= n; ++i) {
				if (e[i][k] > 0) {
					for (j = 1; j <= n; ++j) {
						if (e[k][j] > 0) {
							e[i][j] = max(e[i][j], e[i][k] * e[k][j]);
						}
					}
				}
			}
		}
		bool flag = false;
		for (i = 0; i < n; ) {
			++i;
			if (e[i][i]>0 && (e[i][i] - 1 > 0.00000001)) {
				flag = true;
			}
		}
		cout<<"Case "<<l<<": ";
		if (flag) {
			cout<<"Yes\n";
		}
		else {
			cout<<"No\n";
		}
	}
}