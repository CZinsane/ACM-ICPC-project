#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

int i, j, n, m, l;
int map[5][5]={
	{5,-1,-2,-1,-3},
	{-1,5,-3,-2,-4},
	{-2,-3,5,-2,-2},
	{-1,-2,-2,5,-1},
	{-3,-4,-2,-1,0}
};
int f[110][110];
char a[110], b[110];
char c;

int main() {
	cin>>l;
	while (l--) {
		cin>>n;
		getchar();
		for (i = 0; i < n;) {
			cin>>c;
			++i;
			if (c == 'A') {
				a[i] = 0;
			}
			else if (c == 'C') {
				a[i] = 1;
			}
			else if (c == 'G') {
				a[i] = 2;
			}
			else {
				a[i] = 3;
			}
		}
		cin>>m;
		getchar();
		for (j = 0; j < m;) {
			cin>>c;
			++j;
			if (c == 'A') {
				b[j] = 0;
			}
			else if (c == 'C') {
				b[j] = 1;
			}
			else if (c == 'G') {
				b[j] = 2;
			}
			else {
				b[j] = 3;
			}
		}
		for (i = 1; i <= n; ++i) {
			for (j = 1; j <= m; ++j) {
				f[i][j] = -99999;
			}
		}
		f[0][0] = 0;
		for (i = 1; i <= n; ++i) {
			f[i][0] = f[i-1][0] + map[a[i]][4];
		}
		for (j = 1; j <= m; ++j) {
			f[0][j] = f[0][j-1] + map[4][b[j]];
		}
		for (i = 1; i <= n; ++i) {
			for (j = 1; j <= m; ++j) {
				f[i][j] = max(f[i][j], f[i-1][j-1] + map[a[i]][b[j]]);
				//if (i > 1) {
				f[i][j] = max(f[i][j], f[i-1][j] + map[a[i]][4]);
				//}
				//if (j > 1) {
				f[i][j] = max(f[i][j], f[i][j-1] + map[4][b[j]]);
				//}
				//f[i][j] = max(f[i][j], f[i]);
			}
		}
		cout<<f[n][m]<<endl;
	}
}
