#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0; i<t; i++)
	{
	    int n, x;
	    cin>>n>>x;
	    if(x> n/2 || n==x)
	    cout<<(n-x)<<"\n";
	    else
	    cout<<x<<"\n";
	}
	return 0;
}
