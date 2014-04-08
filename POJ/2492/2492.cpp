#include<stdio.h>
using namespace std;
long f[2001],d[2001];
long i,j,k,l,lo,m,n,x,y;
bool flag;
long get(long s){
	if(f[s]==s)return(s);
	else return(get(f[s]));
}
int main(){
	scanf("%ld",&l);
	for(lo=0;lo<l;lo++){
		flag=true;
		scanf("%ld%*c%ld",&n,&m);
		for(i=1;i<=n;i++){
			f[i]=i;d[i]=0;
		}
		for(i=0;i<m;i++){
			scanf("%ld%*c%ld",&x,&y);
			if((get(x)==get(y))or((d[x]!=0)&&(d[y!=0])&&(get(d[x])==get(d[y])))){
				j=i;flag=false;
				printf("Scenario #%ld:\n",lo+1);
				printf("Suspicious bugs found!\n");
				printf("\n");
				break;
			}
			if(d[x])f[get(y)]=get(d[x]);
			else d[x]=y;
			if(d[y])f[get(x)]=get(d[y]);
			else d[y]=x;
		}
		if(flag){
			printf("Scenario #%ld:\n",lo+1);
			printf("No suspicious bugs found!\n");
			printf("\n");
		}else{
			for(i=j+1;i<m;i++){
				scanf("%ld%*c%ld",&x,&y);
			}
		}
	}
}