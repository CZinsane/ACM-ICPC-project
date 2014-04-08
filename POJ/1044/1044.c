#include <stdio.h>

struct node{
    int year,delta;
}computer[20];

int i,j,k,l,n;

int main(){
    l = 0;
    while (scanf("%d",&n)&&(n)) {
        printf("Case #%d:\n",++l);
        for (i = 0; i < n; i++) {
            scanf("%d%d%d",&computer[i].year,&k,&j);
            computer[i].delta = j - k;
        }
        while (computer[0].year < 10000) {
            for (i = 1; i < n; i++) {
                if ((computer[0].year - computer[i].year) % computer[i].delta) {
                    break;
                }
            }
            if (i == n) {
                for (j = 1; j < n; j++) {
                    if (computer[j].year > computer[0].year) {
                        break;
                    }
                }
                if (j == n) {
                    printf("The actual year is %d.\n",computer[0].year);
                    break;
                }
            }
            computer[0].year += computer[0].delta;
        }
        if (computer[0].year >= 10000) {
            printf("Unknown bugs detected.\n");
        }
        printf("\n");
    }
    return 0;
}