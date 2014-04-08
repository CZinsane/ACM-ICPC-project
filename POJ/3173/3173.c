#include <stdio.h>
int i,j,k,l,m,n,x,y;
int f[21][21];
int main(){
    scanf("%d%d",&n,&m);
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            f[i][j] = m;
            m = m % 9 + 1;
        }
    }
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (!f[j][i])
                printf(" ");
            else printf("%d",f[j][i]);
            if (n == j)
                printf("\n");
            else printf(" ");
        }
    }
    return 0;
}
