#include<stdio.h>
#include<iostream>
#include<cstring>
using namespace std;

int i,j,k,n;
char l[100],m[100],r[100];

void op(int ll,int lr,int ml,int mr){
	if(ll>lr)
		return;
	int tmp;
	for(tmp=ml;tmp<=mr;tmp++){
		if(l[ll]==m[tmp])
			break;
	}
	r[--n]=l[ll];
	if(ll==lr)
		return;
	op(ll+tmp-ml+1,lr,tmp+1,mr);
	op(ll+1,ll+tmp-ml,ml,tmp-1);
}

int main(){
	while(scanf("%s%s",l,m)!=EOF){
		n=strlen(m);
		k=n;
		op(0,n-1,0,n-1);
		for(i=0;i<k;i++){
			printf("%c",r[i]);
		}
		printf("\n");
	}
}