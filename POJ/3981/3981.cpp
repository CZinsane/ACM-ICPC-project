#include<stdio.h>
#include<string.h>
char st[1001];
int main(){
    while(gets(st)){
                    char *p,*q=st;
                    while(p=strstr(q,"you")){
                                             *p='\0';
                                             printf("%s",q);
                                             printf("we");
                                             q=p+3;
                    }
                    printf("%s\n",q);
    }
}
