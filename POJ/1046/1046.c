#include <stdio.h>

int i,j,x,y,z,a,b,c,target_color[16][3],mapped_color[3];

int main(){
    for (i = 0; i < 16; i++) {
        scanf("%d%d%d",&target_color[i][0],&target_color[i][1],&target_color[i][2]);
    }
    while (scanf("%d%d%d",&mapped_color[0],&mapped_color[1],&mapped_color[2])) {
        if (!(mapped_color[0]+1)) {
            return 0;
        }
        j = 0;
        for (i = 1; i < 16; i++) {
            x = (target_color[i][0]-mapped_color[0]);
            y = (target_color[i][1]-mapped_color[1]);
            z = (target_color[i][2]-mapped_color[2]);
            a = (target_color[j][0]-mapped_color[0]);
            b = (target_color[j][1]-mapped_color[1]);
            c = (target_color[j][2]-mapped_color[2]);
            if (a * a + b * b + c * c > x * x + y * y + z * z ) {
                j = i;
            }
        }
        printf("(%d,%d,%d) maps to (%d,%d,%d)\n",mapped_color[0],mapped_color[1],mapped_color[2],target_color[j][0],target_color[j][1],target_color[j][2]);
    }
    return 0;
}