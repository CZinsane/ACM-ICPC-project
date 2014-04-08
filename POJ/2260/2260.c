#include<stdio.h>

typedef int bool;
#define true 1
#define false 0

int i,j,k,m,n,ansx,ansy;
bool map[100][100],temp,flag;

int main(){
	while((scanf("%d",&n)!=EOF)&&n){
		ansx=-1;
		ansy=-1;
		flag=false;
		for(i=0;i<n;i++){
			temp=false;
			for(j=0;j<n;j++){
				scanf("%d",&map[i][j]);
				temp^=map[i][j];
			}
			if(temp){
				if(!(ansx+1)){
					ansx=i;
				}
				else flag=true;
			}
		}
		if(flag){
			printf("Corrupt\n");
			continue;
		}
		flag=false;
		for(i=0;i<n;i++){
			temp=false;
			for(j=0;j<n;j++){
				temp^=map[j][i];
			}
			if(temp){
				if(!(ansy+1)){
					ansy=i;
				}
				else flag=true;
			}
		}
		if(flag){
			printf("Corrupt\n");
			continue;
		}
		if((ansx+1)&&(ansy+1)){
			printf("Change bit (%d,%d)\n",ansx+1,ansy+1);
			continue;
		}
		if((ansx+1)||(ansy+1)){
			printf("Corrupt\n");
			continue;
		}
		printf("OK\n");
	}
	return 0;
}
