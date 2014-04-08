#include<cstring>
#include<iostream>
using namespace std;
char a[1000001],b[1000001],c;
int i,j,k,l,m,n;
bool f;
int main(){
	while(cin>>a>>b){
		n=strlen(a);
		m=strlen(b);
		j=0;f=true;
		for(i=0;i<n;i++){
			if(not f){
				break;
			}
			while(a[i]!=b[j]){
				j++;
				if(j>=m){
					f=false;
					cout<<"No"<<endl;
					break;
				}
			}
			j++;
		}
		if(f){
			cout<<"Yes"<<endl;
		}
	}
}