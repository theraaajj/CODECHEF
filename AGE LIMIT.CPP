#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	for(int i=0; i<t; i++)
	{
	    int X,Y,A;
	    cin>>X>>Y>>A;
	    if (A>=X && A<Y)
	    cout<<"YES"<<"\n";
	    else
	    cout<<"NO"<<"\n";
	}
	return 0;
}
