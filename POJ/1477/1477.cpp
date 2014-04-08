#include<stdio.h>
using namespace std;
int a[51];
int i,m,n,ans,l;
int main(){
	l=0;
	while(true){
		l++;
		scanf("%d",&n);
		if(n==0)break;
		m=0;ans=0;
		for(i=1;i<=n;i++){
			scanf("%d",&a[i]);
			m+=a[i];
		}
		m/=n;
		for(i=1;i<=n;i++){
			if(a[i]>m){
				ans+=a[i]-m;
			}
		}
		printf("Set #%d\n",l);
		printf("The minimum number of moves is %d.\n",ans);
		printf("\n");
	}
}