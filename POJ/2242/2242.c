#include<stdio.h>
#include<math.h>

int i;
double p[3][2];
double edge[3];
double t,s,r;

double sqr(double d){
	return (d*d);
}

int main(){
	while(scanf("%lf%lf%lf%lf%lf%lf\n",&p[0][0],&p[0][1],&p[1][0],&p[1][1],&p[2][0],&p[2][1])!=EOF){
		t=0;
		for(i=0;i<3;i++){
			edge[i] = sqrt(sqr(p[i][0]-p[(i+1)%3][0])+sqr(p[i][1]-p[(i+1)%3][1]));
			t+=edge[i];
		}
		t/=2;
		s=t;
		r=1;
		for(i=0;i<3;i++){
			s*=(t-edge[i]);
			r*=edge[i];
		}
		s=sqrt(s);
		r/=2;
		r/=s;
		r*=3.141592653589793;
		printf("%.2f\n",r);
	}
	return 0;
}