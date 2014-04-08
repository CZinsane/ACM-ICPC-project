#include<stdio.h>
#include<math.h>

int i,j,m,n,k,l;
int co[1010][2];
bool edge[1010][1010];
bool flag[1020];
int father[1020];
char c;

int get_father(int x){
	if (father[x]==x)
		return x;
	else {
		int tmp=get_father(father[x]);
		father[x]=tmp;
		return tmp;
	}
}
bool judge_distance(int d,int x,int y){
	return((d*d)>=((co[x][1]-co[y][1])*(co[x][1]-co[y][1])
			+(co[x][0]-co[y][0])*(co[x][0]-co[y][0])));
}
int main(){
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++){
		scanf("%d%d",&co[i][0],&co[i][1]);
		father[i]=i;
		flag[i]=false;
		for(j=1;j<i;j++){
			edge[i][j]=false;
			edge[j][i]=false;
			if (judge_distance(m,i,j)){
				edge[i][j]=true;
				edge[j][i]=true;
			}
		}
	}
	while(scanf("%c",&c)!=EOF){
		if (c=='O'){
			scanf("%d",&l);
			flag[l]=true;
			for(i=1;i<=n;i++){
				if ((flag[i])&&(edge[i][l])){
					father[get_father(i)]=get_father(l);
				}
			}
		}
		if (c=='S'){
			scanf("%d%d",&i,&j);
			if (get_father(i)==get_father(j)){
				printf("SUCCESS\n");
			}
			else printf("FAIL\n");
		}
	}
}
