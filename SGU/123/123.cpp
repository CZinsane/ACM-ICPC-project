#include <iostream>
using namespace std;

int main() {
	int n;
	int a = 1, b = 1, s;
	cin>>n;
	n += 2;
	for (int i = 3; i <=n; ++i) {
		s = a + b;
		a = b;
		b = s;
	}
	cout<<s-1<<endl;
}