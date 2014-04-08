#include <stdio.h>

int i,n,ans;

int main(){
    while (scanf("%d",&n)&&(n)) {
        ans=n;
        for(i=2;i<=n;i++){
            if (!(n%i)) {
                ans/=i;
                ans*=(i-1);
            }
            while (!(n%i)) {
                n/=i;
            }
        }
        printf("%d\n",ans);
    }
}