#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	cout<<n/3*2+1*(n%3==2)<<endl;
}