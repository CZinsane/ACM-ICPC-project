#include<stdio.h>
int main(){
    int i,n,m=0;
    scanf("%d",&n);
    i=1;
    while(m<n){
               m+=i;
               i++;
    }
    while((m-n)%2){
                   m+=i;
                   i++;
    }
    printf("%d",i-1);
}
