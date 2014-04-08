#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int main() {
	int V, tmp, ans = 0, team_one[105];
	vector <int> E[105];
	vector <int>::iterator it;
	cin>>V;
	for (int i = 1; i <= V; ++i) {
		E[i].clear();
		while (cin>>tmp && tmp) {
			E[i].push_back(tmp);
		}
	}
	int visit[105];
	memset(visit, 0, sizeof(visit));
	for (int i = 1; i <= V; ++i) {
		if (!visit[i]) {
			visit[i] = 1;
			for (it = E[i].begin(); it != E[i].end(); ++it) {
				visit[*it] = 2;
			}
		}
	}
	for (int i = 1; i <= V; ++i) {
		if (visit[i] == 1) {
			team_one[ans] = i;
			++ans;
		}
	}
	cout<<ans<<endl;
	for (int i = 0; i < ans; ++i)
	{
		cout<<team_one[i];
		if (i+1 == ans) {
			cout<<endl;
		}
		else {
			cout<<" ";
		}
	}
}