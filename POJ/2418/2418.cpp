#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int i,j,k,l,m,n;
string str[1000000];

int main(){
	n=0;
	while(getline(cin,str[n]))
		n++;
	sort(str,str+n);
	l=1;
	cout<<str[0]<<" ";
	for(i=1;i<n;i++){
		if(str[i]==str[i-1]){
			l++;
		}
		else{
			printf("%.4f\n",((double)l)/n*100);
			l=1;
			cout<<str[i]<<" ";
		}
	}
	printf("%.4f\n",((double)l)/n*100);
}