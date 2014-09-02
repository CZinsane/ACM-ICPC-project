#include <iostream>
#include <string>
using namespace std;

int main() {
	string st, pokemon[8];
	pokemon[0] = "vaporeon";
	pokemon[1] = "jolteon";
	pokemon[2] = "flareon";
	pokemon[3] = "umbreon";
	pokemon[4] = "leafeon";
	pokemon[5] = "glaceon";
	pokemon[6] = "sylveon";
	pokemon[7] = "espeon";
	int n;
	cin>>n;
	cin>>st;
	if (n == 6) {
		cout<<pokemon[7]<<endl;
	}
	else if (n == 8) {
		cout<<pokemon[0]<<endl;
	}
	else {
		for (int i = 1; i < 7; ++i) {
			bool flag = true;
			for (int j = 0; j < 7; ++j) {
				if (st[j] != pokemon[i][j] && st[j] != '.') {
					flag = false;
					break;
				}
			}
			if (flag) {
				cout<<pokemon[i]<<endl;
				break;
			}
		}
	}
}