#include<stdio.h>

int i,j,n,m,l,loop,ans,a[100000],b[100000],c[100000];

int max(int x,int y){
	if(x<y)
		return y;
	else return x;
}

int main(){
	while(scanf("%d",&n)&&n){
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
			if(i)
				b[i]=max(a[i],b[i-1]+a[i]);
			else b[i]=a[i];
		}
		for(i=n-1;i+1;i--){
			if(i-n+1)
				c[i]=max(a[i],c[i+1]+a[i]);
			else c[i]=a[i];
		}
		for(i=1;i<n;i++)
			if(b[i]<b[i-1])
				b[i]=b[i-1];
		for(i=n-2;i+1;i--)
			if(c[i]<c[i+1])
				c[i]=c[i+1];
		ans=-99999;
		for(i=1;i<n;i++){
			ans=max(ans,b[i-1]+c[i]);
		}
		printf("%d\n",ans);
	}
	return 0;
}
