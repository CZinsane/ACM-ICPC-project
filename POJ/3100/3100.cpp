#include <iostream>
#include <math.h>
using namespace std;

int i,n,a,b;

int main(){
    while ((cin>>b>>n)) {
        if (b==0) {
            break;
        }
        i=pow((double)b, (double)(1.0/(double)n));
        if (b-pow(i, n)<pow(i+1, n)-b)
            cout<<i<<endl;
        else
            cout<<i+1<<endl;
    }
}
