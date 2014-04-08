#include<stdio.h>
#include<math.h>
typedef int bool;
#define true 1
#define false 0

int i,j,k,m,n,ans,temp;
bool flag;

int main(){
	scanf("%d",&n);
	scanf("%d",&m);
	flag=(m%2);
	for(i=0;i<n;i++){
		scanf("%d",&k);
		if(flag&&(k<0))
			continue;
		else {
			temp=1;
			for(j=0;j<m;j++)
				temp*=k;
			ans+=temp;
		}
	}
	printf("%d",ans);
	return 0;
}
