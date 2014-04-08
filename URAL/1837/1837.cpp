#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#include <utility>
#include <vector>
using namespace std;

int main() {
	int x, team_num, member_num[3], total = 0, edge[305][305];
	vector <pair <string, int> > ans;
	ans.clear();
	for (int i = 0; i < 305; ++i) {
		for (int j = 0; j < 305; ++j) {
			edge[i][j] = 2333;
		}
	}
	string member_name;
	map <string, int> number;
	map <int, string> recode_name;
	number.clear();
	cin>>team_num;
	for (int i = 0; i < team_num; ++i) {
		for (int j = 0; j < 3; ++j) {
			cin>>member_name;
			if (number.count(member_name)) {
				member_num[j] = number[member_name];
			}
			else {
				number[member_name] = total;
				member_num[j] = total;
				recode_name[total++] = member_name;
			}
		}
		for (int j = 0; j < 3; ++j) {
			for (int k = 0; k < 3; ++k) {
				if (j != k) {
					edge[member_num[j]][member_num[k]] = 1;
					edge[member_num[k]][member_num[j]] = 1;
				}
			}
		}
	}
	if (number.count("Isenbaev")) {
		x =number["Isenbaev"]; 
		edge[x][x] = 0;
	}
	else {
		x = total;
	}
	for (int i = 0; i < total; ++i) {
		for (int j = 0; j < total; ++j) {
			for (int k = 0; k < total; ++k) {
				if (edge[j][k] > edge[j][i] + edge[i][k]) {
					edge[j][k] = edge[j][i] + edge[i][k];
				}
			}
		}
	}
	for (int i = 0; i < total; ++i) {
		pair <string, int> tmp;
		tmp.first = recode_name[i];
		tmp.second = edge[x][i];
		ans.push_back(tmp);
	}
	sort(ans.begin(), ans.end());
	for (int i = 0; i < total; ++i) {
		cout<<ans[i].first<<" ";
		if (ans[i].second == 2333) {
			cout<<"undefined"<<endl;
		}
		else {
			cout<<ans[i].second<<endl;
		}
	}
}