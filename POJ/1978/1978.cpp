#include<stdio.h>
int next[60];
int i,j,m,n,head,p,c,tmp_1,tmp_2,tmp_3;
int main(){
	while(scanf("%d%d",&n,&m)&&(n*m)){
		for(i=1;i<=n;i++)next[i]=i+1;
		head=1;
		for(i=1;i<=m;i++){
			tmp_3=head;
			scanf("%d%d",&p,&c);
			if(!(p-1))continue;
			for(j=1;j<p-1;j++)head=next[head];
			tmp_1=head;tmp_2=next[head];
			for(j=1;j<=c;j++)head=next[head];
			next[tmp_1]=next[head];
			next[head]=tmp_3;
			head=tmp_2;
		}
		printf("%d\n",n-head+1);
	}
}