#include <cmath>
#include <iostream>
#include <algorithm>
using namespace std;

double calc_len(int x, int y, int p, int q) {
	return sqrt((x-p)*(x-p)+(y-q)*(y-q));
}

int main() {
	int a, b;
	bool flag = false;
	cin>>a>>b;
	if (a > b) {
		swap(a, b);
		flag = true;
	}
	if (a == 0) {
		if (flag) {
			cout<<1<<" "<<0<<endl;
			cout<<b<<" "<<0<<endl;
			cout<<0<<" "<<0<<endl;
			cout<<b-1<<" "<<0<<endl;
		}
		else {
			cout<<0<<" "<<1<<endl;
			cout<<0<<" "<<b<<endl;
			cout<<0<<" "<<0<<endl;
			cout<<0<<" "<<b-1<<endl;
		}
	}
	else {
		double dis1 = 2 * calc_len(0, 0, a, b) + b;
		double dis2 = calc_len(0, 0, a, b) + 2 * calc_len(0, 0, a-1, b);
		if (dis1 > dis2) {
			cout<<"0 0"<<endl;
			if (flag) {
				cout<<b<<" "<<a<<endl;
				cout<<0<<" "<<a<<endl;
				cout<<b<<" "<<0<<endl;
			}
			else {
				cout<<a<<" "<<b<<endl;
				cout<<a<<" "<<0<<endl;
				cout<<0<<" "<<b<<endl;
			}
		}
		else {
			if (flag) {
				cout<<"0 1"<<endl;
				cout<<b<<" "<<a<<endl;
				cout<<"0 0"<<endl;
				cout<<b<<" "<<a-1<<endl;
			}
			else {
				cout<<"1 0"<<endl;
				cout<<a<<" "<<b<<endl;
				cout<<"0 0"<<endl;
				cout<<a-1<<" "<<b<<endl;
			}
		}
	}
}