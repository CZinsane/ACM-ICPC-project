#include <stdio.h>

int i, j, m = 0, n, ans[1000], num[1000];

int max(int a, int b){
    return a>b? a:b;
}

int main(){
    scanf("%d",&n);
    for (i = 0; i < n; i++) {
        scanf("%d",&num[i]);
        ans[i] = 1;
        for (j = 0; j < n; j++) {
            if (num[j] < num[i]) {
                ans[i] = max(ans[i], ans[j] + 1);
            }
        }
        m = max(m, ans[i]);
    }
    printf("%d\n",m);
    return 0;
}