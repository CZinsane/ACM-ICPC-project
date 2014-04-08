#include<iostream>
using namespace std;
int main()
{
    float a=1;
    while (a!=0)
    {
         cin>>a;
         if (a!=0)
         {
                float n=0;
                float m;
                int i;
                for(i=1;i<=300;i++)
                {
                                   m=i;
                                   n=n+(1/(m+1));
                                   if (n>=a){cout<<i<<" card(s)"<<endl;break;}
                }
         }else break; 
    }
}
