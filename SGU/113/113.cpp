#include <iostream>
#include <cmath>
using namespace std;

#define Max 31622
bool p[Max];
int pri[3500];
int n, m, a, b, times;

int main() {
	for (int i = 2; i < Max; ++i) {
		if (!p[i]) {
			pri[m++] = i;
			for (int j = i; j < Max; j += i) {
				p[j] = true;
			}
		}
	}
	cin>>n;
	for (int i = 0; i < n; ++i) {
		times = 0;
		cin>>a;
		b = sqrt(a);
		for (int j = 0; j < m; ++j) {
			if (b < pri[j] || times > 1) {
				break;
			}
			while (a % pri[j] == 0) {
				++times;
				a /= pri[j];
				b = sqrt(a);
				if (b < pri[j] || times > 1) {
				break;
			}
			}
		}
		if (times > 1 || times == 0) {
			cout<<"No"<<endl;
		}
		else {
			cout<<"Yes"<<endl;
		}
	}
}