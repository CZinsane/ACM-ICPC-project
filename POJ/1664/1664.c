#include <stdio.h>

int i,j,n,m;
int ans[11][11];

int main(){
    for (i = 1; i < 11; i++) {
        ans[i][1] = 1;
        ans[1][i] = 1;
    }
    for (i = 2; i < 11; i++) {
        for (j = 2; j < i; j++) {
            ans[i][j] = ans[i-j][j] + ans[i][j-1];
        }
        ans[i][i] = ans[i][i-1] + 1;
        for (j = i + 1; j < 11; j++) {
            ans[i][j] = ans[i][i];
        }
    }
    scanf("%d",&j);
    for (i = 0; i < j; i++) {
        scanf("%d%d",&n,&m);
        if (n) {
            printf("%d\n",ans[n][m]);
        }
        else printf("1\n");
    }
    return 0;
}