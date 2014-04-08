#include<iostream>
#include<algorithm>
using namespace std;

int i,j,m,n,a[1001],ans;

int main(){
	cin>>m;
	for(j=0;j<m;j++){
		cin>>n;
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		ans=0;
		for(i=0;i<n;i++){
			if(ans<a[i]*(n-i))
				ans=a[i]*(n-i);
		}
		cout<<ans<<endl;
	}
}