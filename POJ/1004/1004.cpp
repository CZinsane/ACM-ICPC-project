#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a,b;
    b=0;
    int i;
    for(i=1;i<=12;i++)
    {
                      cin>>a;b=b+a;
    }
    b=b/12;
    cout<<"$"<<setprecision(2)<<fixed<<b<<endl;
}