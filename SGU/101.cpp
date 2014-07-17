#include <iostream>
using namespace std;

int main() {
	int n, a, b, tag = 0;
	cin>>n;
	int dgr[7], t[105], f[105];
	bool flag[105];
	for (int i = 0; i < 7; ++i) {
		dgr[i] = 0;
	}
	for (int i = 0; i < n; ++i) {
		cin>>a>>b;
		flag[i] = false;
		f[i] = a;
		t[i] = b;
		++dgr[a];
		++dgr[b];
	}
	for (int i = 1; i < 7; ++i) {
		if (dgr[i] % 2) {
			if (tag == 0) {
				a = i;
			}
			else if (tag == 1) {
				b = i;
			}
			else {
				break;
			}
		}
	}
	if (tag > 1) {
		cout<<"No solution"<<endl;
		return 0;
	}
	int m = n;
	while (m--) {
		for (int i = 0; i < n; ++i) {
			if (!flag[i] && ((f[i] == a) || (t[i] == a)) {
				flag[i] = true;
				if (f[i] == a) {
					cout<<i<<" +"<<endl;
				}
				else {
					cout<<i<<" -"<<endl;
				}
			}
		}
	}
}