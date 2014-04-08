#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
#define s 29
using namespace std;

stack<int> f[30];
int p[30];

void init(int n) {
	int t = f[n].top();
	f[n].pop();
	f[t].push(t);
	p[t] = t;
}

void sv(int n) {
	int t = f[n].top();
	f[n].pop();
	f[s].push(t);
	p[t] = s;
}

void op(int n) {
	int t = f[s].top();
	f[s].pop();
	f[n].push(t);
	p[t] = n;
}

int main() {
	string a, b;
	int i, n, x, y, u, v, t;
	while (cin>>n) {
		for (i = 0; i < n; ++i) {
			while (!f[i].empty()) {
				f[i].pop();
			}
			f[i].push(i);
			p[i] = i;
		}
		while (cin>>a) {
			if (a == "quit") {
				break;
			}
			else if (a == "move") {
				cin>>x>>b>>y;
				if (p[x] == p[y]) {
					continue;
				}
				if (b == "onto") {
					u = p[x];
					v = p[y];
					while (f[u].top() != x) {
						init(u);
					}
					while (f[v].top() != y) {
						init(v);
					}
					f[u].pop();
					f[v].push(x);
					p[x] = v;
				}
				else {
					u = p[x];
					v = p[y];
					while (f[u].top() != x) {
						init(u);
					}
					f[u].pop();
					f[v].push(x);
					p[x] = v;
				}
			}
			else {
				cin>>x>>b>>y;
				if (p[x] == p[y]) {
					continue;
				}
				if (b == "onto") {
					u = p[x];
					v = p[y];
					while (f[v].top() != y) {
						init(v);
					}
					while (f[u].top() != x) {
						sv(u);
					}
					f[u].pop();
					f[v].push(x);
					p[x] = v;
					while (!f[s].empty()) {
						op(v);
					}
				}
				else {
					u = p[x];
					v = p[y];
					while (f[u].top() != x) {
						sv(u);
					}
					f[u].pop();
					f[v].push(x);
					p[x] = v;
					while (!f[s].empty()) {
						op(v);
					}
				}
			}
		}
		for (i = 0; i < n; ++i) {
			cout<<i<<":";
			stack <int> opt;
			while (!opt.empty()) {
				opt.pop();
			}
			while (!f[i].empty()) {
				opt.push(f[i].top());
				f[i].pop();
			}
			while (!opt.empty()) {
				cout<<" "<<opt.top();
				opt.pop();
			}
			cout<<endl;
		}
	}
}
