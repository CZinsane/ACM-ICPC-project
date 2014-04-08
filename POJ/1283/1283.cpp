#include<iostream>
using namespace std;
int i,j,n,m;
long long f[220][220];
int main(){
	for(i=1;i<=210;i++){
		for(j=1;j<=210;j++){
			f[i][j]=0;
		}
	}
	for(i=1;i<=210;i++)f[i][i]=1;
	for(i=2;i<=210;i++){
		for(j=1;j<i;j++){
			f[i][j]=f[i-j][j]+f[i-1][j-1];
		}
	}
	while((cin>>n>>m)&&n&&m){
		cout<<f[n][m]<<endl;
	}
}
