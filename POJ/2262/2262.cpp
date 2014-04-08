#include<stdio.h>
int f[80000];
int i,j,k,l,m,n;
bool flag[1100001]={false};
bool pr;
int main(){
    k=0;f[0]=0;
    for(i=2;i<=1000000;i++){
                           if(!flag[i]){
                                        for(j=2*i;j<=1000000;j+=i)flag[j]=true;
                                        k++;f[k]=i;
                           }
    }
    while(scanf("%d",&n)!=EOF){
                               if(n==0)return 0;
                               for(i=1;i<=78498;i++){
                                                     if(!flag[n-f[i]]){
                                                                       printf("%d = %d + %d\n",n,f[i],n-f[i]);break;
                                                     }
                               }
    }
}
