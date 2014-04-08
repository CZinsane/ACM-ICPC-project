#include <iostream>
#include <string>
#include <string.h>
#include <algorithm>
using namespace std;

int i,j,n,m,k,l;
string a,b;
bool flag;

int main(){
    cin>>n;
    for (i = 0; i < n; i++) {
        cin>>a>>b;
        flag = false;
        m = b.length();
        l = a.length();
        k = 0;
        for (j = 0; j < m; k++) {
            if (k == l) {
                flag = true;
                break;
            }
            if (a[k] == b[j]) {
                j++;
            }
        }
        if (!flag) {
            cout<<"YES"<<endl;
            continue;
        }
        reverse(a.begin(), a.end());
        k = 0;
        flag = false;
        for (j = 0; j < m; k++) {
            if (k == l) {
                flag = true;
                break;
            }
            if (a[k] == b[j]) {
                j++;
            }
        }
        if (flag) {
            cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;
    }
}