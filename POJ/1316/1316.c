#include <stdio.h>

int flag[10000]={0};
int i,tmp;

int main(){
    for(i = 1; i < 10000; i++){
        tmp = i + i / 1000 + (i / 100) % 10 + (i / 10) % 10 + i % 10;
        if (tmp < 10000) {
            flag[tmp] = 1;
        }
    }
    for(i = 1; i < 10000; i++){
        if(!flag[i])
            printf("%d\n",i);
    }
    return 0;
}