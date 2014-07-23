#include <iostream>
#include <vector>
using namespace std;

int a[101][101], f[101][101], p[101][101], n, m;
vector <int> ans;

int main () {
	cin>>n>>m;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin>>a[i][j];
			if (i) {
				f[i][j] = -99999999;
			}
			else {
				f[i][j] = a[i][j];
			}
		}
	}
	for (int i = 1; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			for (int k = 0; k < j; ++k) {
				if (f[i][j] < f[i-1][k] + a[i][j]) {
					p[i][j] = k;
					f[i][j] = f[i-1][k] + a[i][j];
				}
			}
		}
	}
	int maxt = -99999999, maxi = 0;
	for (int i = 0; i < m; ++i) {
		if (maxt < f[n-1][i]) {
			maxt = f[n-1][i];
			maxi = i;
		}
	}
	cout<<maxt<<endl;
	ans.push_back(maxi);
	for (int i = n-1; i; --i) {
		ans.push_back(p[i][maxi]);
		maxi = p[i][maxi];
	}
	cout<<*(ans.rbegin())+1;
	ans.pop_back();
	for (vector<int>::reverse_iterator it = ans.rbegin(); it != ans.rend(); ++it) {
		cout<<" "<<*(it)+1;
	}
	cout<<endl;
}