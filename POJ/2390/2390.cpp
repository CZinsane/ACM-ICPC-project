#include<stdio.h>
#include<math.h>
int a;
double r,i,n,m;
int main(){
	scanf("%lf%lf%lf",&i,&m,&n);
	r=pow(i/100+1,n)*m;
	a=int(r);
	printf("%d\n",a);
}
