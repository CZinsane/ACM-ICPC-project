#include<stdio.h>
int father[10001];
int i,j,l,loop,n,x,y;
int main(){
	scanf("%d",&l);
	for(loop=0;loop<l;loop++){
		scanf("%d",&n);
		for(i=1;i<=n;i++)father[i]=0;
		for(i=1;i<n;i++){
			scanf("%d %d",&x,&y);
		    father[y]=x;
		}
		scanf("%d %d",&x,&y);
		while(father[x]){
			j=father[x];
			father[x]=0;
			x=j;
		}
		while(father[y])y=father[y];
		printf("%d\n",y);
	}
}
