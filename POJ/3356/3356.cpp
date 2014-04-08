#include <iostream>
#include <string.h>
#include <string>
using namespace std;

int i,j,n,m,k;
string a,b,t;
int ans[1001][1001];

int main(){
    while (cin>>n) {
        cin>>a;
        cin>>m>>b;
        for (i = 0; i < n; i++) {
            for (j = 0; j < m; j++) {
                ans[i][j] = 99999;
            }
        }
        k = max(n, m);
        for (i = 0; i <= k; i++) {
            ans[0][i] = i;
            ans[i][0] = i;
        }
        ans[0][0] = 0;
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= m; j++) {
                if (a[i-1] == b[j-1]) {
                    ans[i][j] = min(ans[i-1][j-1], ans[i][j-1] + 1);
                    ans[i][j] = min(ans[i][j], ans[i-1][j] + 1);
                }
                else {
                    ans[i][j] = min(ans[i-1][j-1] + 1, ans[i][j-1] + 1);
                    ans[i][j] = min(ans[i][j], ans[i-1][j] + 1);
                }
            }
        }
        cout<<ans[n][m]<<endl;
    }
}