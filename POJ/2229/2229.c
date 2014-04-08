#include<stdio.h>

int i,n;
int f[1000001];

int main(){
	scanf("%d",&n);
	f[0]=1;
	for(i=1;i<=n;i++){
		if(i%2)
			f[i]=f[i-1];
		else f[i]=(f[i-2]+f[i/2])%1000000000;
	}
	printf("%d",f[n]);
	return 0;
}
