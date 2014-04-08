#include <stdio.h>

typedef int bool;
#define true 1
#define false 0

int i,j,l,m,n;
int prime[10000],times[33000];
bool flag;

int main(){
    prime[0] = 0;
    for (i = 2; i < 33000; i++) {
        flag = true;
        for (j = 1; j < prime[0]; j++) {
            if (!(i%prime[j])) {
                flag = false;
            }
        }
        if (flag) {
            prime[0]++;
            prime[prime[0]]=i;
        }
        times[i] = 0;
    }
    for (i = 1; i<=prime[0]; i++) {
        for (j = i; j<=prime[0]; j++) {
            if (prime[i] + prime[j] < 33000) {
                times[prime[i] + prime[j]]++;
            }
        }
    }
    while (scanf("%d",&n)&&n) {
        printf("%d\n",times[n]);
    }
}