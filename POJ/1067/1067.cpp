#include <stdio.h>
#include <math.h>
#include <algorithm>
using namespace std;

int a,b,n;

int main(){
    while (scanf("%d%d",&a,&b)!=EOF) {
        n=fabs(a-b);
        n=(int)((double)n*(sqrt(5.0)+1.0)/2.0);
        if (n==min(a,b))
            printf("0\n");
        else
            printf("1\n");
    }
}