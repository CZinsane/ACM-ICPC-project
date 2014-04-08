#include<stdio.h>
using namespace std;
long x,y,z,xx,yy,zz,ans;
long min(long x,long y){
	if(x<y)return x;
	else return y;
}
int main(){
	while(scanf("%ld%ld%ld%ld%ld%ld",&xx,&yy,&zz,&x,&y,&z)&&(xx!=0)&&(yy!=0)&&(zz!=0)){
			ans=999999999;
			if(x==0||y==0||z==0) ans=x*x+y*y+z*z;
			if(x==xx){
				ans=min(ans,(zz+y)*(zz+y)+(xx+zz-z)*(xx+zz-z));
				ans=min(ans,(yy+z)*(yy+z)+(xx+yy-y)*(xx+yy-y));
				ans=min(ans,y*y+(z+xx)*(z+xx));ans=min(ans,z*z+(y+xx)*(y+xx));
			}
			if(y==yy){
				ans=min(ans,(xx+z)*(xx+z)+(yy+xx-x)*(yy+xx-x));
				ans=min(ans,(zz+x)*(zz+x)+(yy+zz-z)*(yy+zz-z));
				ans=min(ans,z*z+(x+yy)*(x+yy));ans=min(ans,x*x+(z+yy)*(z+yy));
			}
			if(z==zz){
				ans=min(ans,(xx+y)*(xx+y)+(zz+xx-x)*(zz+xx-x));
				ans=min(ans,(yy+x)*(yy+x)+(zz+yy-y)*(zz+yy-y));
				ans=min(ans,y*y+(x+zz)*(x+zz));ans=min(ans,x*x+(y+zz)*(y+zz));
			}
		printf("%ld\n",ans);
	}
}
