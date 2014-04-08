#include<stdio.h>
#include<string.h>
#include<set>
using namespace std;

int i,n,a[500001];
set<int> s;

int main(){
	a[0]=0;
	s.insert(0);
	for(i=1;i<500001;i++){
		a[i]=a[i-1]-i;
		if((a[i]<0)||(s.count(a[i])))
			a[i]+=(2*i);
		s.insert(a[i]);
	}
	while((scanf("%d",&n)!=EOF)&&(n+1))
		printf("%d\n",a[n]);
	return 0;
}