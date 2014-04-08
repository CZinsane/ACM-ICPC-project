#include<stdio.h>
using namespace std;
int i,j,n;
int a[101][101];
int max(int x,int y){
	if(x>y)return x;
	else return y;
}
int main(){
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=n-1;i>=1;i--){
		for(j=1;j<=i;j++){
			a[i][j]=max(a[i][j]+a[i+1][j],a[i][j]+a[i+1][j+1]);
		}
	}
	printf("%d",a[1][1]);
}