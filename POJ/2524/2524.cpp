#include<stdio.h>
int f[50001];
int i,j,ans,n,m,x,y,num;
bool flag[50001];
int getfather(int x){
    if(x==f[x])return x;
    else{
         int tmp=getfather(f[x]);
         f[x]=tmp;return tmp;
    }
}
int add(int x,int y){
    if(getfather(x)!=getfather(y))f[getfather(x)]=getfather(y);
}
int main(){
    num=0;
    while(scanf("%d%d",&n,&m)!=EOF){
                                    num++;
                                    if(!n&&!m) return 0;
                                    for(i=1;i<=n;i++)f[i]=i;
                                    for(i=1;i<=m;i++){
                                                      scanf("%d%*c%d",&x,&y);
                                                      add(x,y);
                                    }
                                    for(i=1;i<=n;i++)flag[i]=false;
                                    ans=0;
                                    for(i=1;i<=n;i++){
                                                      if(!flag[getfather(i)]){
                                                                   ans++;flag[getfather(i)]=true;
                                                      }
                                    }
                                    printf("Case %d: %d\n",num,ans);
    }
}
