#include <stdio.h>

int s, d, a, b, i, n;

int main(){
    scanf("%d",&n);
    for (i = 0; i < n; i++) {
        scanf("%d%d",&s,&d);
        a = (s + d) / 2;
        b = (s - d) / 2;
        if ((s + d) % 2) {
            b = -1;
        }
        b>=0? printf("%d %d\n",a,b):printf("impossible\n");
    }
    return 0;
}
