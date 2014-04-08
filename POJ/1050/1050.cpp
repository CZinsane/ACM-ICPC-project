#include<stdio.h>
using namespace std;
int i,j,k,l,m,n,ans=0,mx=0;
int map[101][101];
int f[101];
int main(){
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			scanf("%d",&map[i][j]);
		}
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			f[j]=0;
		}
		for(j=i;j<=n;j++){
			for(k=1;k<=n;k++){
				f[k]+=map[j][k];
			} 
			ans=0;
			for(k=1;k<=n;k++){
				if(ans>0){
					ans+=f[k];
				}else{
					ans=f[k];
				}
				if(ans>mx){
					mx=ans;
				}
			} 
		}
	}
	printf("%d\n",mx);
}