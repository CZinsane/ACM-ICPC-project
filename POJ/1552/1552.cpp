#include<stdio.h>
bool flag[200],num[100];
int i,j,n,ans;
int main(){
   for(i=0;i<100;i++)flag[i]=0;
   while((scanf("%d",&n))&&(n+1)){
      if(!n){
         for(i=0;i<100;i++){
            if((num[i])&&(flag[i]))ans++;
         }
         printf("%d\n",ans);
         ans=0;
         for(i=0;i<100;i++){
            flag[i]=0;num[i]=0;
         }
      }
      else{
         //if(flag[n])ans++;
         num[n]=1;
         flag[2*n]=true;
         //if(!(n%2))flag[n/2]=true;
      }
   }
}