#include <iostream>
#include <string>
using namespace std;

int i, j, n, m, ans, coordinate[3000][2];
string map[25];
bool flag[25][25];

int calc(int x, int y){
    int tmp = 4;
    if ((x) && (map[x-1][y]=='X')) {
        tmp--;
    }
    if ((y) && (map[x][y-1]=='X')) {
        tmp--;
    }
    if ((x < n-1) && (map[x+1][y]=='X')) {
        tmp--;
    }
    if ((y < m-1) && (map[x][y+1]=='X')) {
        tmp--;
    }
    return tmp;
}

int main(){
    while (cin>>n>>m>>coordinate[0][0]>>coordinate[0][1]&&n&&m) {
        coordinate[0][0]--;
        coordinate[0][1]--;
        for (i = 0; i < n; i++) {
            cin>>map[i];
            for (j = 0; j < m; j++) {
                flag[i][j] = false;
            }
        }
        ans = calc(coordinate[0][0], coordinate[0][1]);
        flag[coordinate[0][0]][coordinate[0][1]] = true;
        i = -1;
        j = 0;
        while (i < j) {
            i++;
            if (coordinate[i][0]&&(!flag[coordinate[i][0]-1][coordinate[i][1]])&&(map[coordinate[i][0]-1][coordinate[i][1]]=='X')) {
                j++;
                coordinate[j][0] = coordinate[i][0] - 1;
                coordinate[j][1] = coordinate[i][1];
                ans += calc(coordinate[j][0], coordinate[j][1]);
                flag[coordinate[j][0]][coordinate[j][1]] = true;
            }
            if (coordinate[i][1]&&(!flag[coordinate[i][0]][coordinate[i][1]-1])&&(map[coordinate[i][0]][coordinate[i][1]-1]=='X')) {
                j++;
                coordinate[j][0] = coordinate[i][0];
                coordinate[j][1] = coordinate[i][1] - 1;
                ans += calc(coordinate[j][0], coordinate[j][1]);
                flag[coordinate[j][0]][coordinate[j][1]] = true;
            }
            if ((coordinate[i][0] < n - 1)&&(!flag[coordinate[i][0]+1][coordinate[i][1]])&&(map[coordinate[i][0]+1][coordinate[i][1]]=='X')) {
                j++;
                coordinate[j][0] = coordinate[i][0] + 1;
                coordinate[j][1] = coordinate[i][1];
                ans += calc(coordinate[j][0], coordinate[j][1]);
                flag[coordinate[j][0]][coordinate[j][1]] = true;
            }
            if ((coordinate[i][1] < m - 1)&&(!flag[coordinate[i][0]][coordinate[i][1]+1])&&(map[coordinate[i][0]][coordinate[i][1]+1]=='X')) {
                j++;
                coordinate[j][0] = coordinate[i][0];
                coordinate[j][1] = coordinate[i][1] + 1;
                ans += calc(coordinate[j][0], coordinate[j][1]);
                flag[coordinate[j][0]][coordinate[j][1]] = true;
            }
            if (coordinate[i][0]&&coordinate[i][1]&&(!flag[coordinate[i][0]-1][coordinate[i][1]-1])&&(map[coordinate[i][0]-1][coordinate[i][1]-1]=='X')) {
                j++;
                coordinate[j][0] = coordinate[i][0] - 1;
                coordinate[j][1] = coordinate[i][1] - 1;
                ans += calc(coordinate[j][0], coordinate[j][1]);
                flag[coordinate[j][0]][coordinate[j][1]] = true;
            }
            if ((coordinate[i][0] != n - 1)&&coordinate[i][1]&&(!flag[coordinate[i][0]+1][coordinate[i][1]-1])&&(map[coordinate[i][0]+1][coordinate[i][1]-1]=='X')) {
                j++;
                coordinate[j][0] = coordinate[i][0] + 1;
                coordinate[j][1] = coordinate[i][1] - 1;
                ans += calc(coordinate[j][0], coordinate[j][1]);
                flag[coordinate[j][0]][coordinate[j][1]] = true;
            }
            if ((coordinate[i][0] != n - 1)&&(coordinate[i][1] != m - 1)&&(!flag[coordinate[i][0]+1][coordinate[i][1]+1])&&(map[coordinate[i][0]+1][coordinate[i][1]+1]=='X')) {
                j++;
                coordinate[j][0] = coordinate[i][0] + 1;
                coordinate[j][1] = coordinate[i][1] + 1;
                ans += calc(coordinate[j][0], coordinate[j][1]);
                flag[coordinate[j][0]][coordinate[j][1]] = true;
            }
            if (coordinate[i][0]&&(coordinate[i][1] != m - 1)&&(!flag[coordinate[i][0]-1][coordinate[i][1]+1])&&(map[coordinate[i][0]-1][coordinate[i][1]+1]=='X')) {
                j++;
                coordinate[j][0] = coordinate[i][0] - 1;
                coordinate[j][1] = coordinate[i][1] + 1;
                ans += calc(coordinate[j][0], coordinate[j][1]);
                flag[coordinate[j][0]][coordinate[j][1]] = true;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}