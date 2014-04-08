#include<stdio.h>
#include<iomanip>
using namespace std;
int i,j,n;
double e,t;
int main(){
   printf("n e\n");
   printf("- -----------\n");
   printf("0 1\n");
   printf("1 2\n");
   printf("2 2.5\n");
   e=2.5;
   for(i=3;i<10;i++){
      t=1;
      for(j=1;j<=i;j++){
         t=t*1/j;
      }
      e+=t;
      printf("%d %.9f\n",i,e);
   }
}