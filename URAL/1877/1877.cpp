#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin>>a>>b;
	if (b & 1 || !(a & 1)) {
		cout<<"yes"<<endl;
	}
	else {
		cout<<"no"<<endl;
	}
}