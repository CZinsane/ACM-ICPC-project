#include <stdio.h>

int main(){
	int n,a,b,c,d,e,f,x,y;
	int u[4] = {0, 5, 3, 1};
	while(scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f)&&(a * a + b * b + c * c + d * d + e * e + f * f)){
		n = d + e + f + (c + 3) / 4;
		y = 5 * d + u[c%4];
		if (b > y)
			n += (b - y + 8) / 9;
		x = 36 * n - 36 * f - 25 * e - 16 * d - 9 * c - 4 * b;
		if (a > x)
			n += (a - x + 35) / 36;
		printf("%d\n",n);
	}
	return 0;
}