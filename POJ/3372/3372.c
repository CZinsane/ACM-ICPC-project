#include<stdio.h>
int n;
int main(){
 while(scanf("%d",&n)!=EOF)
  printf(n&(n-1)? "NO\n":"YES\n");
 return 0;
}