#include <stdio.h>

int a, b, c, i, n;

int main(){
    scanf("%d",&n);
    for (i = 0; i < n; i++) {
        scanf("%d%d%d",&a,&c,&b);
        if (a + b - c) {
            printf(a + b > c? "do not advertise\n":"advertise\n");
        }
        else printf("does not matter\n");
    }
    return 0;
}