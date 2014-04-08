#include <iostream>

using namespace std;
	
int n, f[3005];

int DFS (int l, int r) {
	if (l+1 > r) {
		return 0;
	}
	if (l+1 == r) {
		cout<<f[l]<<" ";
		return 0;
	}
	int root = f[r-1], brk = r-1;
	for (int i = l; i < r-1; ++i) {
		if (f[i] > root) {
			brk = i;
			break;
		}
	}
	DFS(brk, r-1);
	DFS(l, brk);
	cout<<root<<" ";
}

int main () {
	cin>>n;
	for (int i = 0; i < n; ++i) {
		cin>>f[i];
	}
	DFS(0, n);
	cout<<endl;
}