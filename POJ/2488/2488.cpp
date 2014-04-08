#include<stdio.h>

const int dir[8][2] = {{-1,-2},{1,-2},{-2,-1},{2,-1},{-2,1},{2,1},{-1,2},{1,2}};

int i,j,k,m,n,l,x,y,num,times;
bool flag,map[30][30];
char pri[55];

void print(int a,int b,int times){
	pri[times*2-1]=a+49;
	pri[times*2-2]=b+65;
	return;
}

void DFS(int a,int b,int times){
	if(flag){
		print(a,b,times);
		return;
	}
	if(times==num){
		flag=true;
		print(a,b,times);
		return;
	}
	int tmp;
	for(tmp=0;tmp<8;tmp++){
		if((a+dir[tmp][0]>=0)&&(a+dir[tmp][0]<n)&&
				(b+dir[tmp][1]>=0)&&(b+dir[tmp][1]<m)&&
				(!map[a+dir[tmp][0]][b+dir[tmp][1]])){
			map[a+dir[tmp][0]][b+dir[tmp][1]]=true;
			DFS(a+dir[tmp][0],b+dir[tmp][1],times+1);
			if(flag){
				print(a,b,times);
				return;
			}
			map[a+dir[tmp][0]][b+dir[tmp][1]]=false;
		}
	}
	if(flag){
		print(a,b,times);
		return;
	}
}

int main(){
	scanf("%d",&l);
	for(k=0;k<l;k++){
		printf("Scenario #%d:\n",k+1);
		flag=false;
		scanf("%d%d",&n,&m);
		for(i=0;i<n;i++)
			for(j=0;j<m;j++)
				map[i][j]=false;
		num=n*m;
		map[0][0]=true;
		DFS(0,0,1);
		if(!flag){
			printf("impossible\n");
		}
		else{
			num*=2;
			for(i=0;i<num;i++){
				printf("%c",pri[i]);
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
