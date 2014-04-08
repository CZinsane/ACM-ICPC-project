#include <stdio.h>

int i,j,k,m,n,l,edge[100][100];

int main(){
    while (scanf("%d",&n)&&n) {
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                edge[i][j] = 9999999;
            }
            edge[i][i] = 0;
        }
        for (i = 0; i < n; i++) {
            scanf("%d",&m);
            for (j = 0; j < m; j++) {
                scanf("%d%d",&k,&l);
                k--;
                edge[i][k] = l;
            }
        }
        for (k = 0; k < n; k++) {
            for (i = 0; i < n; i++) {
                if (i == k) {
                    continue;
                }
                else {
                    for (j = 0; j < n; j++) {
                        if (edge[i][k] + edge[k][j] < edge[i][j]) {
                            edge[i][j] = edge[i][k] + edge[k][j];
                        }
                    }
                }
            }
        }
        l = 9999999;
        for (i = 0; i < n; i++) {
            m = 0;
            for (j = 0; j < n; j++) {
                if (m < edge[i][j]) {
                    m = edge[i][j];
                }
            }
            if (m < l) {
                l = m;
                k = i+1;
            }
        }
        printf("%d %d\n",k,l);
    }
    return 0;
}