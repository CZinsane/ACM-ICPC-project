#include <cstdio>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
	srand(time(NULL));
	for (int i = 0; i < 1000000; ++i) {
		printf("%c", rand()%26+'a');
	}
}