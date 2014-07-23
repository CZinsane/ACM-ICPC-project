#include <iostream>
#define INF 0x7fffffff
using namespace std;

long long get_ans(int x) {
	long long tmp = 0;
	while (x) {
		x /= 5;
		tmp += x;
	}
	return tmp;
}

int main() {
	long long l, r, n, m;
	cin>>n;
	l = 0;
	r = INF;
	while (l < r) {
		m = (l+r)>>1;
		if (get_ans(m) >= n) {
			r = m;
		}
		else {
			l = m + 1;
		}
	}
	if (get_ans(l) == n) {
		if (!l) {
			++l;
		}
		cout<<l<<endl;
	}
	else {
		cout<<"No solution"<<endl;
	}
}