#include<stdio.h>
using namespace std;
int f[150001][2];
int a[150001];
int i,j,m,n;
int max(int x,int y){
	if(x>y) return x;
	else return y;
}
int main(){
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
		f[i][0]=0;f[i][1];
	}
	f[1][0]=0;f[1][1]=a[1];
	f[2][0]=a[1]-a[2];f[2][1]=max(a[1],a[2]);
	for(i=3;i<=n;i++){
		f[i][1]=max(f[i-1][0]+a[i],f[i-1][1]);
		f[i][0]=max(f[i-1][1]-a[i],f[i-1][0]);
	}
	m=max(f[n][1],f[n][0]);
	printf("%d",m);	
}