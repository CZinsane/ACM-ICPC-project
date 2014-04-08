#include <iostream>
#include <math.h>
using namespace std;

int num_1,num_2,i,tmp,n;
char e;

int main(){
    while ((cin>>num_1>>e>>num_2)&&(num_1*num_1+num_2*num_2)) {
        for(i=0;i<num_2;i++)
            num_1*=10;
        tmp=num_1;
        num_1++;
            n=log((double)num_1)/log(2.0);
        num_2=1;
        for (i=0; i<n; i++) {
            num_2*=2;
        }
        num_1-=num_2;
        if (!num_1) {
            cout<<tmp<<endl;
        }
        else cout<<(2*num_1-1)<<endl;
    }
}