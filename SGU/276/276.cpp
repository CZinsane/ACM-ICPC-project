#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin>>a>>b;
	b -= a;
	a = 0;
	if (b > 0) {
		++a;
	}
	if (b >= 300) {
		++a;
	}
	if (b >= 900) {
		++a;
	}
	if (b >= 1800) {
		++a;
	}
	cout<<a<<endl;
}