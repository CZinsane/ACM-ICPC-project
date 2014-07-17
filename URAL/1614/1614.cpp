#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int m = n<<1;
	for (int i = 0; i < n; ++i) {
		cout<<i+1<<" ";
		for (int j = 1; j < n; ++j) {
			cout<<(i-j+m) % m + 1<<" ";
			cout<<(i+j) % m + 1<<" ";
		}
		cout<<i + n + 1<<endl;
	}

}