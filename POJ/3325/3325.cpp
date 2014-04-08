#include <iostream>
#include <algorithm>

using namespace std;

int i,ans,n;
int a[1000];

int main(){
    while ((cin>>n)&&(n)) {
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a, a+n);
        ans = 0;
        for (i = 1; i < n-1; i++) {
            ans += a[i];
        }
        ans /= (n-2);
        cout << ans << endl;
    }
    return 0;
}