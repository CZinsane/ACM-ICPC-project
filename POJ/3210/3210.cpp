#include<stdio.h>
int n;
int main(){
    while(scanf("%d",&n)){
                          if(n==0)return 0;
                          if(n%2)printf("%d\n",n-1);
                          else printf("No Solution!\n");
    }
}
