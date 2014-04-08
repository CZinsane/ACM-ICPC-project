#include<stdio.h>

double s;
int w,p;
int main()
{
while(scanf("%lf%d%d",&s,&w,&p),w&&p)
{
int ok=0;
if(s<=4.5&&w>=150&&p>=200) printf("Wide Receiver "),ok=1;
if(s<=6.0&&w>=300&&p>=500) printf("Lineman "),ok=1;
if(s<=5.0&&w>=200&&p>=300) printf("Quarterback"),ok=1;
if(!ok) printf("No positions");
printf("\n");
}
return 0;
}