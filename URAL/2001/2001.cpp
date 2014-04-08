#include <iostream>
using namespace std;

int main() {
	int a[3], b[3];
	for (int i = 0; i < 3; ++i) {
		cin>>a[i]>>b[i];
	}
	int x = a[0] - a[2], y = b[0] - b[1];
	cout<<x<<" "<<y<<endl;
}