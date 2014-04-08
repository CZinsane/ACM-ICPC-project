#include <iostream>
using namespace std;

int main() {
	int f[105][105];
	int cnt = 0;
	int a;
	cin>>a;
	for (int i = 2; i < 2*a+1; ++i) {
		for (int j = 1; j <a+1; ++j) {
			if (i-j <= a && i-j > 0) {
				f[i-j][j] = ++cnt;
			}
		}
	}
	for (int i = 1; i <= a; ++i) {
		for (int j = a; j; --j) {
			cout<<f[j][i];
			if (j == 1) {
				cout<<endl;
			}
			else {
				cout<<" ";
			}
		}
	}
}