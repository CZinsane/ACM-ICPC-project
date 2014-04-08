#include<stdio.h>
using namespace std;
int a,b,c,d,n,i;
int main(){
	i=0;
	while(scanf("%d %d %d %d",&a,&b,&c,&d)&&(a!=-1)){
		a%=23;b%=28;c%=33;
		n=(5544*a+14421*b+1288*c-d+21252)%21252;
		if(n==0)n=21252;
		printf("Case %d: the next triple peak occurs in %d days.\n",++i,n);
	}
}
