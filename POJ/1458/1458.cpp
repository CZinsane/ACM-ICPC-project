#include <iostream>
#include <string>
using namespace std;

int i, j, m, n, ans[500][500];
string str1,str2;

int main(){
    while (cin>>str1>>str2) {
        n = str1.length();
        m = str2.length();
        ans[0][0] = 0;
        for (i= 0; i < n; i++) {
            for (j = 0; j < m; j++) {
                if (str1[i] == str2[j]) {
                    ans[i+1][j+1] = ans[i][j] + 1;
                }
                else {
                    ans[i+1][j+1] = max(ans[i][j+1],ans[i+1][j]);
                }
            }
        }
        cout<<ans[n][m]<<endl;
    }
    return 0;
}