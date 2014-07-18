#include <iostream>
using namespace std;

int ans[13][32];

int calc(int last_date, int month, int days) {
	for (int i = 1; i <= days; ++i) {
		if (i == 1) {
			ans[month][i] = last_date % 7 + 1;
		}
		else {
			ans[month][i] = ans[month][i-1] % 7 + 1;
		}
	}
	return ans[month][days];
}

int main() {
	int last = 7	;
	last = calc(last, 1, 31);
	last = calc(last, 2, 28);
	last = calc(last, 3, 31);
	last = calc(last, 4, 30);
	last = calc(last, 5, 31);
	last = calc(last, 6, 30);
	last = calc(last, 7, 31);
	last = calc(last, 8, 31);
	last = calc(last, 9, 30);
	last = calc(last, 10, 31);
	last = calc(last, 11, 30);
	last = calc(last, 12, 31);
	int n, m;
	cin>>n>>m;
	if (m < 1 || m > 12) {
		cout<<"Impossible"<<endl;
	}
	else if (n < 1 || n > 31) {
		cout<<"Impossible"<<endl;
	}
	else if (ans[m][n] == 0) {
		cout<<"Impossible"<<endl;
	}
	else {
		cout<<ans[m][n]<<endl;
	}
}