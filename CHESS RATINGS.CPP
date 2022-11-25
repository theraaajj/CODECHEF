#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	 for(int i=0; i<t; i++)
	 {
	     int x,y;
	     cin>>x>>y;
	     int a= (y-x)/8;
	     if ( (y-x)%8 ==0)
	     cout<<a<<"\n";
	     else
	     cout<<a+1<<"\n";
	     
	 }
	return 0;
}
