#include<stdio.h>
#include<math.h>
int n,i,m;
int main(){
   scanf("%d",&n);
   for(i=0;i<n;i++){
      scanf("%d",&m);
      m=sqrt(m);
      printf("%d\n",m);
   }
}