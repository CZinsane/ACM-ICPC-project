#include<stdio.h>
#include<string>
using namespace std;
int i,j,k,l,m,n;
int b[101];
char a[101][101];
int swap(int x,int y){
	char t[101];
	int tmp;
	for(tmp=0;tmp<m;tmp++){
		t[tmp]=a[x][tmp];
		a[x][tmp]=a[y][tmp];
		a[y][tmp]=t[tmp];
	}
	tmp=b[x];
	b[x]=b[y];
	b[y]=tmp;
	return 0;
}
int main(){
	scanf("%d %d\n",&m,&n);
	for(i=1;i<=n;i++){
			scanf("%s",a[i]);
			for(j=1;j<m;j++){
				for(k=0;k<j;k++){
					if(a[i][j]<a[i][k])b[i]++;
				}
			}	
	}
	for(i=1;i<=n;i++){
		for(j=n;j>=i;j--){
			if(b[j]<b[j-1]){
				swap(j,j-1);
			}
		}
	}
	for(i=1;i<=n;i++){
		printf("%s\n",a[i]);
	}
}