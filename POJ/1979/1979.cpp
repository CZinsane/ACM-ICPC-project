#include<iostream>
using namespace std;
int queue[600][2];
bool flag[25][25];
int i,j,k,l,m,n,x,y;
char c;
int main(){
    while((cin>>m>>n)&&(n*m)){
    	for(i=1;i<=n;i++){
    		for(j=1;j<=m;j++){
    			cin>>c;
                if(c=='#')flag[i][j]=false;
                else flag[i][j]=true;
                if(c=='@'){
                	flag[i][j]=false;
                    x=i;y=j;
                }
    		}
    	}
        queue[1][0]=x;queue[1][1]=y;
        i=0;j=1;
        while(i<j){
        	i++;
            if((queue[i][0]>1)&&(flag[queue[i][0]-1][queue[i][1]])){
            	j++;
                flag[queue[i][0]-1][queue[i][1]]=false;
                queue[j][0]=queue[i][0]-1;
                queue[j][1]=queue[i][1];
            }
            if((queue[i][1]>1)&&(flag[queue[i][0]][queue[i][1]-1])){
            	j++;
                flag[queue[i][0]][queue[i][1]-1]=false;
                queue[j][0]=queue[i][0];
                queue[j][1]=queue[i][1]-1;
            }
            if((queue[i][0]<n)&&(flag[queue[i][0]+1][queue[i][1]])){
                j++;
                flag[queue[i][0]+1][queue[i][1]]=false;
                queue[j][0]=queue[i][0]+1;
                queue[j][1]=queue[i][1];
            }
            if((queue[i][1]<m)&&(flag[queue[i][0]][queue[i][1]+1])){
                j++;
                flag[queue[i][0]][queue[i][1]+1]=false;
                queue[j][0]=queue[i][0];
                queue[j][1]=queue[i][1]+1;
            }
        }
        cout<<j<<endl;
    }
}
