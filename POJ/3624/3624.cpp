#include<iostream>
using namespace std;
int main(){
    int n,m,i,j,t;
    int a[3500];
    int b[3500];
    long f[13000];
    cin>>n>>m;
    for(i=1;i<=m;i++){f[i]=0;}
    for(i=1;i<=n;i++){
                      cin>>a[i]>>b[i];
                      for(j=m;j>=a[i];j--){
                                            f[j]=max(f[j-a[i]]+b[i],f[j]);
                      }
    }
    cout<<f[m];
}
