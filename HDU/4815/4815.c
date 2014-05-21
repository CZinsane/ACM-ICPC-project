#include <stdio.h>
#include <string.h>

int s[40], sum, dp[40000], i, j;
long long ans;

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int n;
        double p;
        scanf("%ld%lf", &n, &p);
        memset(dp, 0, sizeof(dp));
        dp[0] = 1;
        sum = 0;
        for (i = 0; i < n; ++i) {
            scanf("%d", &s[i]);
            sum += s[i];
        }
        ans = 1LL<<n;
        p *= ans;
        ans = 0;
        for (i = 0; i <n; ++i) {
            for (j = sum; j >= s[i]; --j) {
                dp[j] += dp[j-s[i]];
            }
        }
        for (i = 0; i <=sum; ++i) {
            ans += dp[i];
            if (ans >= p) {
                printf("%d\n", i);
                break;
            }
        }
    }
}