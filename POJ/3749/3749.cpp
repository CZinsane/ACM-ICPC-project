#include<stdio.h>
#include<cstring>
#include<iostream>
#include<string>
using namespace std;
int i,j,n;
string s,st;
int main(){
   while(getline(cin,st)){
      if(st=="ENDOFINPUT")return 0;
      getline(cin,st);
      n=st.length();
      for(i=0;i<n;i++){
         if((st[i]>='A')&&(st[i]<='Z')){
            j=int(st[i])-5;
            if(j<int('A'))j+=26;
            st[i]=char(j);
         }
      }
      cout<<st<<endl;
      getline(cin,s);
   }
}