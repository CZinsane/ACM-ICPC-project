#include <iostream>
using namespace std;

long long abs_longlong(long long x){
    if (x<0) {
        return (-x);
    }
    else return x;
}

long long ans,n,m;
int i,l;

int main(){
    cin>>l;
    for (i=0; i<l;) {
        cout<<"Scenario #"<<++i<<":"<<endl;
        cin>>n>>m;
        ans = abs_longlong(m - n)+ 1;
        ans *= (m + n);
        ans /=2;
        cout<<ans<<endl<<endl;
    }
}