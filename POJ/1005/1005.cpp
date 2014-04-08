#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,i,m;
    cin>>n;
    double a,b,c;
    double pi=3.1415926536;
    for(i=1;i<=n;i++)
    {
                cin>>a>>b;
                c=sqrt(a*a+b*b);
                a=0;m=0;
                while(a<c)
                {
                          m=m+50;a=sqrt(m*2/pi);
                }     
                cout<<"Property "<<i<<": This property will begin eroding in year "<<(m/50)<<"."<<endl;
    }
    cout<<"END OF OUTPUT.";
}