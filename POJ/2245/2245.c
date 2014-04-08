#include<stdio.h>

int flag, i, j, m, n, a[15], a1, a2, a3, a4, a5, a6, k;

int main() {
	flag = 0;
	while ((scanf("%d", &n) != EOF)&&(n)){
		for(i=0;i<n;i++) {
			scanf("%d",&a[i]);
		}
		if(flag)
			printf("\n");
		k=n;
		flag =1;
		for(a1=0;a1<k-5;a1++)
			for(a2=a1+1;a2<k-4;a2++)
				for(a3=a2+1;a3<k-3;a3++)
					for(a4=a3+1;a4<k-2;a4++)
						for(a5=a4+1;a5<k-1;a5++)
							for(a6=a5+1;a6<k;a6++)
								printf("%d %d %d %d %d %d\n",a[a1],a[a2],a[a3],a[a4],a[a5],a[a6]);
	}
	return 0;
}
