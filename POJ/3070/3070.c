#include <stdio.h>
#define M 10000

int fib_last4(int num) {
	if (!num) {
		return 0;
	}
	int ret=1,next=1,ret_2=ret;
	int flag=1, tt=num;
	while ( tt >>= 1) flag <<= 1;
	while ( flag >>= 1 ) {
		if ( num & flag ) {
			ret_2 = ret * ret + next * next;
			next = (ret + ret + next) * next;
		}
		else {
			ret_2 = (next + next + M - ret) * ret;
			next = ret * ret + next * next;
		}
		ret = ret_2 % M;
		next = next % M;
		}
	return ret;
}

int main() {
	int n;
	while (scanf("%d", &n) && (n+1)) {
		printf("%d\n", fib_last4(n));
	}
}