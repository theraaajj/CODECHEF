#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	for(int i=0; i<t; i++)
	{
	   int X;
	   cin>>X;
	   if (X>=1 && X<=4)
	   cout<<"YES"<<"\n";
	   else
	   cout<<"NO"<<"\n";
    } 
	return 0;
}
