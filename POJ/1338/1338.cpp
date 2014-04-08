#include<stdio.h>
using namespace std;
long a[1501];
long b[3];
long i,n,x,y,z;
int main(){
	a[1]=1;b[0]=1;b[1]=1;b[2]=1;
	for(i=1;i<1500;i++){
		while((x=a[b[0]]*2)&&(x==a[i])){
			b[0]++;x=a[b[0]]*2;
		}
		while((y=a[b[1]]*3)&&(y==a[i])){
			b[1]++;y=a[b[1]]*3;
		}
		while((z=a[b[2]]*5)&&(z==a[i])){
			b[2]++;z=a[b[2]]*5;
		}
		if((x<=y)&&(x<=z)){
			a[i+1]=x;b[0]++;
		}
		if((y<x)&&(y<=z)){
			a[i+1]=y;b[1]++;
		}
		if((z<y)&&(z<x)){
			a[i+1]=z;b[2]++;
		}
	}
	while(scanf("%ld",&n)&&n){
		printf("%ld\n",a[n]);
	}
}
