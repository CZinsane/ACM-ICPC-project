#include<stdio.h>
int min(int x,int y){
    if(x<y)return x;
    else return y;
}
int e[110][110];
int i,j,k,l,m,n,x,y;
int main(){
    scanf("%d%d%d",&n,&x,&y);
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++){
            if(i==j)e[i][j]=0;
            else e[i][j]=9999999;
        }
    for(i=1;i<=n;i++){
        scanf("%d",&m);
        for(j=0;j<m;j++){
            scanf("%d",&l);
            if(j)e[i][l]=1;
            else e[i][l]=0;
        }
    }
    for(k=1;k<=n;k++)
        for(i=1;i<=n;i++)
            for(j=1;j<=n;j++)
                e[i][j]=min(e[i][j],e[i][k]+e[k][j]);
    if(e[x][y]>1000)printf("-1\n");
    else printf("%d\n",e[x][y]);
}