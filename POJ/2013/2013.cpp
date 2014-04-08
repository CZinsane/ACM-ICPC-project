#include<iostream>
#include<string>
using namespace std;

int i,j,k,m,n;
string a[15];

int main(){
	j=0;
	while(cin>>n&&n){
		j++;
		cout<<"SET "<<j<<endl;
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		m=n/2;
		k=n%2;
		for(i=0;i<m+k;i++){
			cout<<a[i*2]<<endl;
		}
		for(i=m-1;i>=0;i--){
			cout<<a[i*2+1]<<endl;
		}
	}
}