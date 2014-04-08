#include <iostream>
#include <strstream>
#include <string>
using namespace std;

int main() {
	string s[205];
	int n;
	cin>>n;
	for (int i = 1; i <=n; ++i) {
		strstream ss;
		ss << i;
		ss >> s[i];
		s[i] = "sin(" + s[i];
	}
	string a[205];
	a[1] = s[1];
	for (int i = 2; i <= n; ++i) {
		if (i % 2) {
			a[i] = a[i-1] + "+"+s[i];
		}
		else {
			a[i] = a[i-1] + "-"+s[i];
		}
	}
	for (int i = 1;i <= n; ++i) {
		for (int j = 1; j <= i; ++j) {
			a[i] += ")";
		}
	}
	for (int i = 1; i < n; ++i) {
		cout<<"(";
	}
	for (int i = 1; i <= n; ++i) {
		cout<<a[i]<<"+"<<(n-i+1);
		if (i != n) {
			cout<<")";
		}
		else {
			cout<<endl;
		}
	}
}