#include <stdio.h>
typedef int bool;
#define true 1
#define false 0

int i,j,m,n,a,b,x,y,king,rook,bishop,queen;
char c1,c2;
bool bishop_flag;

int max(int num1, int num2){
    return (num1>num2? num1:num2);
}

int min(int num1, int num2){
    return (num1<num2? num1:num2);
}

bool odd(int num){
    return (num%2? true:false);
}

int main(){
    scanf("%d",&n);
    getchar();
    if (!n) {
        printf("0 0 0 0\n");
        return 0;
    }
    for (i = 0; i < n; i++) {
        scanf("%c%d %c%d",&c1,&b,&c2,&y);
        getchar();
        a = c1 - 96;
        x = c2 - 96;
        king = max(abs(a - x), abs(b - y));
        rook = 2;
        if (a == x) {
            rook--;
        }
        if (b == y) {
            rook--;
        }
        bishop = 2;
        if (a + b == x + y) {
            bishop--;
        }
        if (a - b == x - y) {
            bishop--;
        }
        bishop_flag = odd(a - b) ^ odd(x - y);
        queen = min(rook, bishop);
        printf("%d %d %d ",king,queen,rook);
        if (bishop_flag) {
            printf("Inf\n");
        }
        else printf("%d\n",bishop);
    }
    return 0;
}