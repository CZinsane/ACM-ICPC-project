#include<stdio.h>
#include<string.h>

int i,j,k,l,m,n;
char s[1000000];

int main(){
	while(scanf("%s",s)&&s[0]!='.'){
		i=0;
		j=0;
		l=strlen(s);
		for(i=1;j!=l&&i<l;i++)
			if(!(l%i))
				for(j=i;j<l&&!strncmp(s,s+j,i);j+=i);
		printf("%d\n",i==l? 1:l/(i-1));
	}
	return 0;
}
