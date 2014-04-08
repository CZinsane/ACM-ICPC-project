#include <iostream>
using namespace std;

int  n, k, i, j, l = 0;
long long ans;
char map[10][10];
//bool available[10][10];
int position[100][2];
bool had_put[100];
int queue[100];

int op(int times, int last) {
	if (times == k) {
		ans++;
		return 0;
	}
	int tmp;
	for (tmp = last; tmp < l; tmp++) {
		if (!had_put[tmp]) {
			bool flag = true;
			for (i = 0; i < times; i++) {
				if (position[tmp][0] == position[queue[i]][0]
				   || position[tmp][1] == position[queue[i]][1]) {
					flag = false;
					break;
				}
			}
			if (!flag) {
				continue;
			}
			had_put[tmp] = true;
			queue[times] = tmp;
			op(times + 1, tmp + 1);
			had_put[tmp] = false;
		}
	}
	return 0;
}

int main(){
	while (cin>>n>>k && (n+1) && (k+1)) {
		ans = 0;
		l = 0;
		for (i = 0; i < n; i++){
			for (j = 0; j < n; j++){
				//available[i][j] = true;
				cin>>map[i][j];
				if (map[i][j] == '#') {
					position[l][0] = i;
					position[l][1] = j;
					had_put[l] = false;
					l++;
				}
			}
		}
		op(0, 0);
		cout<<ans<<endl;
	}
}
