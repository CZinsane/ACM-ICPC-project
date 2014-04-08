#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int map[127][127];
	int n;
	char p[2];
	cin>>n;
	while (n--) {
		memset(map, 0, sizeof(map));
		int ans = 0;
		cin>>p[0]>>p[1];
		++map[p[0]-2][p[1]-1];
		++map[p[0]-2][p[1]+1];
		++map[p[0]+2][p[1]-1];
		++map[p[0]+2][p[1]+1];
		++map[p[0]-1][p[1]-2];
		++map[p[0]-1][p[1]+2];
		++map[p[0]+1][p[1]-2];
		++map[p[0]+1][p[1]+2];
		for (int i = 'a'; i <= 'h'; ++i) {
			for (int j = '1'; j <= '8'; ++j) {
				ans += map[i][j];
			}
		}
		cout<<ans<<endl;
	}
}