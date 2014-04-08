#include <iostream>
using namespace std;

long long x,y,m,n,l,t,p,g,tt,temp;

long long e_gcd(long long a, long long b , long long &x, long long &y) {
	if (!b){
      int tmp = a;
      x = 1;
      y = 0;
      return tmp;
	}
    else {
    	int tmp = e_gcd(b, a % b, x, y);
        tt = x;
        x = y;
        y = tt - (a / b) * y;
        return tmp;
    }
	return 0;
}

int main(){
	cin>>x>>y>>m>>n>>l;
	temp = e_gcd(n - m, l, t, p);
		if (!((x-y) % temp)) {
			t = t % l;
			if (t < 0)
				t = t + l;
			g = l / temp;
	        t = t * ((x - y) / temp);
	        cout<<((t % g + g) % g)<<endl;
		}
	    else cout<<"Impossible"<<endl;
}
