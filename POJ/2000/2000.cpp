#include<stdio.h>
int i,n,m,ans;
int main(){
   while(scanf("%d",&n)&&n){
      i=1;m=0;ans=0;
      while(n>=(i+m)){
         m+=i;
         ans+=(i*i);
         i++;
      }
      ans+=((n-m)*i);
      printf("%d %d\n",n,ans);
   }
}