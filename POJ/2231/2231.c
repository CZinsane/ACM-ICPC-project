#include<stdio.h>
#include<stdlib.h>

int i,j,n,a[10001];
long long ans;

int main(){
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	ans=0;
	for(i=0;i<n;i++){
		for(j=0;j<i;j++){
			ans+=abs(a[i]-a[j]);
		}
	}
	ans*=2;
	printf("%lld",ans);
	return 0;
}