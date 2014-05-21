#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		int a, b;
		scanf("%d%d", &a, &b);
		if (a > b) {
			swap(a, b);
		}
		getchar();
		char c;
		for (int i = 0; i < a; ++i) {
			for (int j = 0; j < b; ++j) {
				scanf("%c", &c);
				printf("%c", c);
			}
			printf("\n");
		}
	}
}