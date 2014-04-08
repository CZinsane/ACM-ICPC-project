#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

int i,j,k,m,n,num[100000],repeat[99999],times[99999];
char c;
bool flag;

int main(){
    cin>>n;
    for (i = 0; i < n; i++) {
        m = 0;
        while (m < 7) {
            scanf("%c",&c);
            if ((c < 58) && (c > 47)) {
                m++;
                num[i] *= 10;
                num[i] += c - 48;
                continue;
            }
            if ((c < 90) && (c > 64)) {
                m++;
                num[i] *= 10;
                switch (c) {
                    case 'A':
                    case 'B':
                    case 'C':
                        num[i] += 2;
                        break;
                        
                    case 'D':
                    case 'E':
                    case 'F':
                        num[i] += 3;
                        break;
                        
                    case 'G':
                    case 'H':
                    case 'I':
                        num[i] += 4;
                        break;
                    
                    case 'J':
                    case 'K':
                    case 'L':
                        num[i] += 5;
                        break;
                        
                    case 'M':
                    case 'N':
                    case 'O':
                        num[i] += 6;
                        break;
                        
                    case 'P':
                    case 'R':
                    case 'S':
                        num[i] += 7;
                        break;
                        
                    case 'V':
                    case 'T':
                    case 'U':
                        num[i] += 8;
                        break;
                    
                    case 'Y':
                    case 'W':
                    case 'X':
                        num[i] += 9;
                        break;
                    default:
                        break;
                }
            }
        }
    }
    flag = false;
    sort(num, num + n);
    k = -1;
    for (i = 1; i < n; i++) {
        if (num[i-1] == num[i]) {
            flag = true;
            if (!(k + 1)) {
                repeat[++k] = i;
                times[k] = 2;
                continue;
            }
            if (num[i] == num[repeat[k]]) {
                times[k]++;
            }
            else {
                repeat[++k] = i;
                times[k] = 2;
            }
        }
    }
    k++;
    if (flag) {
        for (i = 0; i < k; i++) {
            n = num[repeat[i]] / 10000;
            m = num[repeat[i]] % 10000;
            printf("%03d-%04d %d\n", n, m, times[i]);
        }
    }
    else {
        cout<<"No duplicates. "<<endl;
    }
    return 0;
}