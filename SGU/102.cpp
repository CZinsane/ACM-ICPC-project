#include <iostream>
using namespace std;

int n, cnt, phi[10005];
bool vis[10005];

int Eratosthenes (int n){
		phi[1] = 1;
		for (int i = 2; i < n; ++i){
			if (!vis[i]) {
				++cnt;
				for (int j = i; j < n; j += i) {
					if (!phi[j]) {
						phi[j] = j;
					}
					phi[j] = phi[j] / i * (i - 1);
					vis[j] = true;
				}
			}
		}
		//return cnt;
}

int main() {
	cin>>n;
	Eratosthenes(n+1);
	cout<<phi[n]<<endl;
}