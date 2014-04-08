#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int f[105][105];
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cin>>f[i][j];
		}
	}
	for (int i = 0; i < n*2-1; ++i) {
		for (int j = 0; j <= i; ++j) {
			if (i-j >= n || j >= n) {
				continue;
			}
			cout<<f[i-j][j];
			if (i == n*2-2 && j == n-1) {
				cout<<endl;
			}
			else {
				cout<<" ";
			}
		}
	}
}