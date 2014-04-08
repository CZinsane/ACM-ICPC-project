#include<stdio.h>
using namespace std;
int i,j,k,m,n;
char name[20];
int main(){
	while(scanf("%d%d",&n,&m)&&n){
		k=3*m;
		for(i=0;i<n;i++){
			scanf("%*s%d\n",&j);
			k-=j;
		}
		printf("%d\n",k);
	}
}
