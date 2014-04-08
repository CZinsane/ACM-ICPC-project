#include<stdio.h>
using namespace std;
int f[25][16000];
int i,j,k,m,n;
int w[25],d[25];
int main(){
	/*while(*/scanf("%d%d\n",&n,&m);/*!=EOF){*/
		for(i=1;i<=n;i++)scanf("%d",&d[i]);
		for(i=1;i<=m;i++)scanf("%d",&w[i]);
		f[0][7500]=1;
		for(i=1;i<=15000;i++)f[1][i]=0;
		for(i=1;i<=m;i++){
			for(j=1;j<=15000;j++){
				f[i+1][j]=0;
				if(f[i-1][j]){
					for(k=1;k<=n;k++){
						f[i][j+w[i]*d[k]]+=f[i-1][j];
					}
				}
			}
		}
	printf("%d\n",f[m][7500]);
	//}
}
