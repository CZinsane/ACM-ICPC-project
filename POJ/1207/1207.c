#include <stdio.h>

int n, m, i, j, left, right, tmp, times, most;

int main(){
    while (scanf("%d%d",&n,&m)!=EOF) {
        left = n < m ? n:m;
        right = n < m ? m:n;
        most = 0;
        for (i = left; i <= right; i++) {
            tmp = i;
            times = 1;
            while (tmp - 1) {
                if (tmp % 2) {
                    tmp *= 3;
                    tmp++;
                }
                else {
                    tmp /= 2;
                }
                times++;
            }
            if (times > most) {
                most = times;
            }
        }
        printf("%d %d %d\n",n,m,most);
    }
    return 0;
}