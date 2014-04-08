#include<stdio.h> 
using namespace std;
int i,j,k,l,m,n,x,y,ans;
int a[10001],b[10001],h[10001],mk[10001];
int f[101][101],map[101][101];
int max(int temp1,int temp2){
	if(temp1>temp2){
		return temp1;
	} 
	else return temp2; 
}
int sw(int x1,int y1){
	int tmp=mk[x1];
	mk[x1]=mk[y1];
	mk[y1]=tmp;
	tmp=h[x1];
	h[x1]=h[y1];
	h[y1]=tmp;
}
int up(int k){
	while((k>1)and(h[k]>h[k/2])){
		sw(k,k/2);
		up(k/2);
	}
}
int down(int k){
	int q=1;
	while((2*q<=k)and((h[q]<h[2*q])or(h[q]<h[2*q+1]))){
		if(h[2*q]>h[2*q+1]){
			sw(q,2*q);
			q=q*2;
		}else{
			sw(q,2*q+1);
			q=q*2+1;
		}
	}
}
int main(){
	scanf("%d %d",&n,&m);
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			k=(i-1)*m+j;
			mk[k]=k;
			scanf("%d",&h[k]); 
			map[i][j]=h[k];
			a[k]=i;b[k]=j;
			up(k);		
		}
	}
	int u=k;
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			f[i][j]=1;
		}
	}
	for(i=1;i<=u;i++){
		x=a[mk[1]];y=b[mk[1]];
		if((x>1)&&(map[x-1][y]>map[x][y])){
			f[x][y]=max(f[x][y],f[x-1][y]+1);
		}
		if((y>1)&&(map[x][y-1]>map[x][y])){
			f[x][y]=max(f[x][y],f[x][y-1]+1);
		}
		if((x<n)&&(map[x+1][y]>map[x][y])){
			f[x][y]=max(f[x][y],f[x+1][y]+1);
		}
		if((y<m)&&(map[x][y+1]>map[x][y])){
			f[x][y]=max(f[x][y],f[x][y+1]+1);
		}
		ans=max(f[x][y],ans);
		sw(1,k);h[k]=-1;
		k=k-1;
		down(k);
	}
	printf("%d",ans,"\n");
}