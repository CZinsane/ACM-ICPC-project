#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>
using namespace std;

int i,j,n;
int ans[2][5010];
string str,rev;

int main(){
    cin>>n;
    cin>>str;
    rev = str;
    reverse(rev.begin(), rev.end());
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (str[i-1] == rev[j-1]) {
                ans[1][j] = ans[0][j-1] + 1;
            }
            else {
                ans[1][j] = max(ans[1][j-1], ans[0][j]);
            }
        }
        for (j = 1; j <= n; j++) {
            ans[0][j] = ans[1][j];
        }
    }
    cout<<(n-ans[0][n])<<endl;
    return 0;
}