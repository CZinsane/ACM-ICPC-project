#include <iostream>
using namespace std;

int main () {
	ios::sync_with_stdio(0);
	int n;
	cin>>n;
	if (n < 9) {
		cout<<0<<endl;
	}
	else if (n ==9) {
		cout<<8<<endl;
	}
	else {
		cout<<72;
		for (int i = 11; i <= n; ++i) {
			cout<<"0";
		}
		cout<<endl;
	}
}