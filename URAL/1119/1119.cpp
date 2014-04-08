#include <cmath>
#include <iostream>
#include <algorithm>
using namespace std;

int main () {
	int n, m, l, x, y, f[1005][1005];
	cin>>n>>m>>l;
	for (int i = 0; i < l; ++i) {
		cin>>x>>y;
		f[x][y] = 1;
	}
	for (int i = 1; i <= n+1; ++i) {
		for (int j = 1; j <= m+1; ++j) {
			f[i][j] += f[i-1][j-1];
			f[i][j] = max(f[i][j], max(f[i-1][j], f[i][j-1]));
		}
	}
	float ans = (double)(n+m)*100-(double)f[n+1][m+1]*(200-100*sqrt(2));
	cout<<round(ans)<<endl;
}