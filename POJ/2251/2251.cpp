#include<stdio.h>

int i, j, k, l, n, m, sx, sy, sz, ex, ey, ez, x, y, currx, curry, currz;
char map[35][35][35];
int queue[70000][3];
int ans[35][35][35];
bool flag[35][35][35];

int judge(int x, int y, int z, int answer) {
	if ((x < 0) || (x >= n))
		return 0;
	if ((y < 0) || (y >= m))
		return 0;
	if ((z < 0) || (z >= l))
		return 0;
	if (map[x][y][z] == '#')
		return 0;
	if (flag[x][y][z])
		return 0;
	return 1;
}

void initialize() {
	queue[0][0] = sx;
	queue[0][1] = sy;
	queue[0][2] = sz;
	x = -1;
	y = 0;
}

void op(int a, int b, int c, int d) {
	if (judge(a, b, c, d)) {
		y++;
		queue[y][0] = a;
		queue[y][1] = b;
		queue[y][2] = c;
		ans[a][b][c] = d + 1;
		flag[a][b][c]=true;
	}
}

int main() {
	while (scanf("%d%d%d", &n, &m, &l) != EOF) {
		if ((!n) && (!m) && (!l))
			return 0;
		for (i = 0; i < n; i++) {
			for (j = 0; j < m; j++) {
				scanf("%s", map[i][j]);
				for (k = 0; k < l; k++) {
					//scanf("%c",&map[i][j][k]);
					ans[i][j][k] = 9999999;
					flag[i][j][k] = false;
					if (map[i][j][k] == 'S') {
						sx = i;
						sy = j;
						sz = k;
						ans[i][j][k] = 0;
					}
					if (map[i][j][k] == 'E') {
						ex = i;
						ey = j;
						ez = k;
					}
				}
			}
			scanf("\n");
		}
		initialize();
		while (x < y) {
			x++;
			currx = queue[x][0];
			curry = queue[x][1];
			currz = queue[x][2];
			currx--;
			op(currx, curry, currz, ans[queue[x][0]][queue[x][1]][queue[x][2]]);
			currx += 2;
			op(currx, curry, currz, ans[queue[x][0]][queue[x][1]][queue[x][2]]);
			currx--;
			curry++;
			op(currx, curry, currz, ans[queue[x][0]][queue[x][1]][queue[x][2]]);
			curry -= 2;
			op(currx, curry, currz, ans[queue[x][0]][queue[x][1]][queue[x][2]]);
			curry++;
			currz++;
			op(currx, curry, currz, ans[queue[x][0]][queue[x][1]][queue[x][2]]);
			currz -= 2;
			op(currx, curry, currz, ans[queue[x][0]][queue[x][1]][queue[x][2]]);
			currz++;
		}
		if (ans[ex][ey][ez] <= 999999)
			printf("Escaped in %d minute(s).\n", ans[ex][ey][ez]);
		else
			printf("Trapped!\n");
	}
	return 0;
}