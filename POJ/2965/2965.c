#include <stdio.h>

int i,j,m,n;
int map[4][4];
char c;

int main(){
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            map[i][j]=0;
        }
    }
    for (i = 0; i < 16; i++) {
        scanf("%c",&c);
        if (i % 4 == 3) {
            scanf("%*c");
        }
        if (c=='+') {
            for (j = 0; j < 4; j++) {
                map[j][i/4]++;
                map[i%4][j]++;
            }
            map[i%4][i/4]--;
        }
    }
    n = 0;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (map[i][j]%2) {
                n++;
            }
        }
    }
    printf("%d\n",n);
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (map[i][j]%2) {
                printf("%d %d\n",j+1,i+1);
            }
        }
    }
    return 0;
}