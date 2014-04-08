#include <iostream>
#include <vector>
using namespace std;

int i, sum;
int right_num;

template<class T>
class Parencodings;

template<class T>
class Parencode {
	friend class Parencodings<T> ;
private:
	int length;
	vector<char> ch;
};

template<class T>
class Parencodings {
private:
	Parencode<T> pc;
public:
	Parencodings() {
		pc.length = 0;
		sum = 0;
	}
	~Parencodings() {
	}
	;
	void add_left(int n) {
		for (i = pc.length - right_num; i < n; ++i) {
			pc.ch.push_back('(');
		}
		pc.length += (n - sum);
		sum += (n - sum);

	}
	void add_right() {
		pc.ch.push_back(')');
		pc.length++;
		right_num++;
	}
	int match() {
		int answer = 0, times = 0, tmp = 0;
		while (true) {
			times++;
			if (pc.ch[pc.length - times] == '(') {
				tmp--;
				if (!tmp) {
					break;
				}
			} else {
				tmp++;
				answer++;
			}
		}
		return answer;
	}
};

int main() {
	int m, loop, j, l, num;
	cin >> m;
	for (loop = 0; loop < m; loop++) {
		right_num = 0;
		cin >> l;
		Parencodings<int> problem;
		for (j = 0; j < l; j++) {
			cin >> num;
			problem.add_left(num);
			problem.add_right();
			cout << problem.match();
			if (l - j - 1) {
				cout << " ";
			} else {
				cout << endl;
			}
		}
	}
}
