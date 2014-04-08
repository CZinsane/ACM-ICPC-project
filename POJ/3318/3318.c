#include <stdio.h>
#include <stdlib.h>

int i,j,n,m,flag;
int a[500][500],b[500][500],c[500][500],x[500],tmp[500],left[500],right[500];

int main(){
    srand( time(NULL) );
    scanf("%d",&n);
    for (i = 0; i < n; i++) {
        x[i] = rand() % 100 + 1;
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d",&a[i][j]);
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d",&b[i][j]);
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d",&c[i][j]);
        }
    }
    for (i = 0; i < n; i++) {
        tmp[i] = 0;
        for (j = 0; j < n; j++) {
            tmp[i] += a[j][i] * x[j];
        }
    }
    for (i = 0; i < n; i++) {
        left[i] = 0;
        for (j = 0; j < n; j++) {
            left[i] += b[j][i] * tmp[j];
        }
    }
    for (i = 0; i < n; i++) {
        right[i] = 0;
        for (j = 0; j < n; j++) {
            right[i] += c[j][i] * x[j];
        }
    }
    flag = 1;
    for (i = 0; i < n; i++) {
        if (left[i] != right[i]) {
            flag = 0;
        }
    }
    printf(flag? "YES\n":"NO\n");
    return 0;
}