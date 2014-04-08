#include<stdio.h>
int min(int a,int b){
    if(a<b)return a;else return b;
}
int gcd(int a,int b){
    int x=min(a,b);
    int y=a+b-x;
    if(x==0)return y;else return gcd(x,y%x);
}
int main(){
    int a,b,c,d;
    char f;
    while(scanf("%d%*c%d%c%d%*c%d",&a,&b,&f,&c,&d)!=EOF){
                                                    int flag=0;
                                                    if(a<0){flag++;a=-a;}
                                                    if(b<0){flag++;b=-b;}
                                                    if(c<0){flag++;c=-c;}
                                                    if(d<0){flag++;d=-d;}
                                                    int den=b*d,num;
                                                    if(f=='+')num=a*d+b*c;
                                                    else num=a*d-b*c;
                                                    if(num==0){printf("0\n");continue;}
                                                    if(num==den){printf("1\n");continue;}
                                                    if(num<0){flag++;num=-num;}
                                                    if(flag%2)printf("-");
                                                    int g=gcd(num,den);
                                                    num/=g;den/=g;
                                                    if(den==1)printf("%d\n",num);
                                                    else printf("%d/%d\n",num,den);
    }
}
