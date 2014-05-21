#include <iostream>
using namespace std;

int main() {
	double n, m, ans = 0;
	cin>>n>>m;
	double i = 0;
	while (ans < n) {
		ans += m/(2*(++i)-1);
		if (ans >= n) {
			cout<<(long long)((i*m)-(ans-n)*(2*i-1))+1<<endl;
			break;
		}
	}
}