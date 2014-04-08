#include<stdio.h>
using namespace std;
float a,b,c;
int main(){
	scanf("%f",&a);
	while(true){
		scanf("%f",&b);
		if(b!=999){
			c=b-a;
			printf("%.2f\n",c);
			a=b;
		}else{
			printf("End of Output\n");
			break;
		}
	}
}