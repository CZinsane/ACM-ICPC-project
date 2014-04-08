#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

bool inrange(char c) {
	if (c >= 'A' && c <= 'Z') {
		return true;
	}
	else if (c >= '0' && c <= '9') {
		return true;
	}
	else return false;
}

int trans(char x) {
	if (x >= '0' && x <= '9') {
		return x-'0';
	}
	else {
		return x-'A'+10;
	}
}

int main() {
	char number;
	int ans = 0;
	int b = 0;
	while (~scanf("%c", &number) && inrange(number)) {
		int a = trans(number);
		ans += a;
		if (b < a) {
			b = a;
		}
	}
	if (b == 0) {
		cout<<2<<endl;
		return 0;
	}
	else {
		for (int i = b+1; i <= 36; ++i) {
			if (ans % (i-1) == 0) {
				cout<<i<<endl;
				return 0;
			}
		}
	}
	cout<<"No solution."<<endl;
}
