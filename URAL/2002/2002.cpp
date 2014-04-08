#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	int n, total = -1;
	map<string, int> no;
	string ord, name, pswd;
	bool online[101];
	string password[101];
	cin>>n;
	for (int i = 0; i < n; ++i) {
		cin>>ord;
		if (ord == "register") {
			cin>>name>>pswd;
			if (no.count(name) == 0) {
				no[name] = ++total;
				online[total] = false;
				password[total] = pswd;
				cout<<"success: new user added"<<endl;
			}
			else {
				cout<<"fail: user already exists"<<endl;
			}
		}
		else if (ord == "login") {
			cin>>name>>pswd;
			if (no.count(name) == 0) {
				cout<<"fail: no such user"<<endl;
			}
			else {
				if (password[no[name]] == pswd) {
					if (online[no[name]]) {
						cout<<"fail: already logged in"<<endl;
					}
					else {
						online[no[name]] = true;
						cout<<"success: user logged in"<<endl;
					}
				}
				else {
					cout<<"fail: incorrect password"<<endl;
				}
			}
		}
		else {
			cin>>name;
			if (no.count(name) == 0) {
				cout<<"fail: no such user"<<endl;
			}
			else {
				if (!online[no[name]]) {
					cout<<"fail: already logged out"<<endl;
				}
				else {
					online[no[name]] = false;
					cout<<"success: user logged out"<<endl;
				}
			}
		}
	}
}