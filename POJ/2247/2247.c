#include<stdio.h>

int i,n;
long long k;
long long p[10];
long long ans[6000];

int minnum(){
	if((2*ans[p[2]]<=3*ans[p[3]])&&(2*ans[p[2]]<=5*ans[p[5]])&&(2*ans[p[2]]<=7*ans[p[7]]))
		return 2;
	if((2*ans[p[2]]>=3*ans[p[3]])&&(3*ans[p[3]]<=5*ans[p[5]])&&(3*ans[p[3]]<=7*ans[p[7]]))
		return 3;
	if((5*ans[p[5]]<=3*ans[p[3]])&&(2*ans[p[2]]>=5*ans[p[5]])&&(5*ans[p[5]]<=7*ans[p[7]]))
		return 5;
	if((7*ans[p[7]]<=3*ans[p[3]])&&(7*ans[p[7]]<=5*ans[p[5]])&&(2*ans[p[2]]>=7*ans[p[7]]))
		return 7;
	return 0;
}

int main(){
	ans[0]=1;
	ans[1]=2;
	ans[2]=3;
	ans[3]=4;
	ans[4]=5;
	ans[5]=6;
	ans[6]=7;
	p[2]=3;
	p[3]=2;
	p[5]=1;
	p[7]=1;
	n=6;
	while(n<5841){
		while(ans[p[2]]*2==ans[n])
			p[2]++;
		while(ans[p[3]]*3==ans[n])
			p[3]++;
		while(ans[p[5]]*5==ans[n])
			p[5]++;
		while(ans[p[7]]*7==ans[n])
			p[7]++;
		k=minnum();
		n++;
		ans[n]=ans[p[k]]*k;
		p[k]++;
	}
	while((scanf("%d",&n)!=EOF)&&(n)){
		if((n%100>10)&&(n%100<20)){
			printf("The %dth humble number is %lld.\n",n,ans[n-1]);
			continue;
		}
		if(n%10==1)
			printf("The %dst humble number is %lld.\n",n,ans[n-1]);
		if(n%10==2)
			printf("The %dnd humble number is %lld.\n",n,ans[n-1]);
		if(n%10==3)
			printf("The %drd humble number is %lld.\n",n,ans[n-1]);
		if((n%10>3)||(!(n%10)))
			printf("The %dth humble number is %lld.\n",n,ans[n-1]);
	}
	return 0;
}