#include<stdio.h>

int i,j,k,l,m,n,r;
int queue[100][2];
int flag[10][10];
char x,y;

void initialize(){
	for(i=1;i<9;i++){
		for(j=1;j<9;j++){
			flag[i][j]=0;
		}
	}
	l=-1;r=0;
	queue[0][0]=x-96;
	queue[0][1]=n;
	n=y-96;
}

void BFS(){
	if((queue[r][0]==n)&&(queue[r][1]==m))
		return;
	while(l<r){
		l++;
		k=flag[queue[l][0]][queue[l][1]];
		if((queue[l][0]-1>0)&&(queue[l][1]-2>0)&&(!flag[queue[l][0]-1][queue[l][1]-2])){
			r++;
			queue[r][0]=queue[l][0]-1;
			queue[r][1]=queue[l][1]-2;
			flag[queue[r][0]][queue[r][1]]=k+1;
		}
		if((queue[l][0]+1<9)&&(queue[l][1]-2>0)&&(!flag[queue[l][0]+1][queue[l][1]-2])){
			r++;
			queue[r][0]=queue[l][0]+1;
			queue[r][1]=queue[l][1]-2;
			flag[queue[r][0]][queue[r][1]]=k+1;
		}
		if((queue[l][0]-1>0)&&(queue[l][1]+2<9)&&(!flag[queue[l][0]-1][queue[l][1]+2])){
			r++;
			queue[r][0]=queue[l][0]-1;
			queue[r][1]=queue[l][1]+2;
			flag[queue[r][0]][queue[r][1]]=k+1;
		}
		if((queue[l][0]+1<9)&&(queue[l][1]+2<9)&&(!flag[queue[l][0]+1][queue[l][1]+2])){
			r++;
			queue[r][0]=queue[l][0]+1;
			queue[r][1]=queue[l][1]+2;
			flag[queue[r][0]][queue[r][1]]=k+1;
		}
		if((queue[l][0]-2>0)&&(queue[l][1]-1>0)&&(!flag[queue[l][0]-2][queue[l][1]-1])){
			r++;
			queue[r][0]=queue[l][0]-2;
			queue[r][1]=queue[l][1]-1;
			flag[queue[r][0]][queue[r][1]]=k+1;
		}
		if((queue[l][0]-2>0)&&(queue[l][1]+1<9)&&(!flag[queue[l][0]-2][queue[l][1]+1])){
			r++;
			queue[r][0]=queue[l][0]-2;
			queue[r][1]=queue[l][1]+1;
			flag[queue[r][0]][queue[r][1]]=k+1;
		}
		if((queue[l][0]+2<9)&&(queue[l][1]-1>0)&&(!flag[queue[l][0]+2][queue[l][1]-1])){
			r++;
			queue[r][0]=queue[l][0]+2;
			queue[r][1]=queue[l][1]-1;
			flag[queue[r][0]][queue[r][1]]=k+1;
		}
		if((queue[l][0]+2<9)&&(queue[l][1]+1<9)&&(!flag[queue[l][0]+2][queue[l][1]+1])){
			r++;
			queue[r][0]=queue[l][0]+2;
			queue[r][1]=queue[l][1]+1;
			flag[queue[r][0]][queue[r][1]]=k+1;
		}
	}
}

int main(){
	while(scanf("%c%d %c%d",&x,&n,&y,&m)!=EOF){
		initialize();
		BFS();
		printf("To get from %c%d to %c%d takes %d knight moves.\n",x,queue[0][1],y,m,flag[n][m]);
		scanf("%c",&x);
	}
}