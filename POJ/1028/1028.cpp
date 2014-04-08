#include <iostream>
#include <string>
using namespace std;

int i, j, m, n;
string st;
string q[200];

int main() {
	i = 0;
	n = 1;
	q[0] = "http://www.acm.org/";
	while (cin>>st) {
		if (st == "QUIT") {
			return 0;
		}
		if (st == "VISIT") {
			cin>>q[++i];
			n = i + 1;
			cout<<q[i]<<endl;
		}
		if (st == "BACK") {
			if (i) {
				cout<<q[--i]<<endl;
			}
			else {
				cout<<"Ignored\n";
			}
		}
		if (st == "FORWARD") {
			if (n-i-1) {
				cout<<q[++i]<<endl;
			}
			else {
				cout<<"Ignored\n";
			}
		}
	}
}