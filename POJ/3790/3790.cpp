#include<stdio.h>
int f[1001];
int i,n,m;
int main(){
   f[0]=1;
   f[1]=1;
   for(i=2;i<=1000;i++){
      if(i%2)f[i]=f[i-1];
      else f[i]=f[i-1]+f[i/2];
   }
   scanf("%d",&n);
   for(i=0;i<n;i++){
      scanf("%d",&m);
      printf("%d %d\n",i+1,f[m]);
   }
}