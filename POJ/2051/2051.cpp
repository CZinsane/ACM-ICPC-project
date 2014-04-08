#include <iostream>
#include <queue>
using namespace std;

class query {
public:
	int ID, period, current_time;
	friend bool operator< (query x, query y) {
		if (x.current_time == y.current_time) {
			return x.ID > y.ID;
		}
		return (x.current_time > y.current_time);
	}
};

int i, j, n, m;
string st;
priority_queue<query> q;

int main() {
	query one_query;
	while (cin>>st && st != "#") {
		cin>>n>>m;
		one_query.period = m;
		one_query.current_time = m;
		one_query.ID = n;
		q.push(one_query);
	}
	cin>>n;
	while (n--) {
		one_query = q.top();
		q.pop();
		cout<<one_query.ID<<endl;
		one_query.current_time += one_query.period;
		q.push(one_query);
	}
}