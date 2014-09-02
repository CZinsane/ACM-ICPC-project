#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int a[6], sum, t = 0;
	bool f[110000];
	while (cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4]>>a[5] && ++t) {
		bool aa = false;
		for (int i = 0; i < 6; ++i) {
			aa |= a[i];
		}
		if (!aa) {
			break;
		}
		sum = 0;
		for (int i = 0; i < 6; ) {
			sum += a[i]*(++i);
		}
		if (sum & 1) {
			cout<<"Collection #"<<t<<":"<<endl;
			cout<<"Can't be divided."<<endl;
			cout<<endl;
			continue;
		}
		else {
			bool flag = false;
			sum >>= 1;
			memset(f, false, sizeof(f));
			f[0] = true;
			for (int i = 0; i < 6; ++i) {
				if (a[i]*(i+1) >= sum) {
					for (int j = i+1; j <= sum; ++j) {
						f[j] = f[j] || f[j-i-1];
					}
					if (f[sum]) {
						flag = true;
						break;
					}
				}
				else {
					int tmp = 1,cnt = a[i];
					while (tmp < cnt) {
						for (int j = sum; j >= tmp*(1+i); --j) {
							f[j] = f[j] || f[j-tmp*(1+i)];
						}
						cnt -= tmp;
						tmp <<= 1;
					}
					for (int j = sum; j >= (1+i)*cnt; --j) {
						f[j] = f[j] || f[j-cnt*(1+i)];
					}
					if (f[sum]) {
						flag = true;
					}
				}
			}
			if (flag) {
				cout<<"Collection #"<<t<<":"<<endl;
				cout<<"Can be divided."<<endl;
			}
			else {
				cout<<"Collection #"<<t<<":"<<endl;
				cout<<"Can't be divided."<<endl;
			}
		}
		cout<<endl;
	}
}