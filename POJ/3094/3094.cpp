#include <iostream>
#include <string.h>
#include <string>
using namespace std;

int i,n;
long long ans;
string str;

int main(){
    while (getline(cin,str)&&(str!="#")) {
        ans = 0;
        n = str.length();
        for (i = 0; i < n; i++) {
            if (str[i] == ' ') {
                continue;
            }
            ans += (i + 1) * (str[i] - 64);
        }
        cout<<ans<<endl;
    }
    return 0;
}