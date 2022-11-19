#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0; i<t; i++)
	{
	    int n;
	    cin>>n;
	    int x = n/4;
	    if (n%4==0)
	    cout<<x<<"\n";
	    else
	    cout<<(x+1)<<"\n";
	}
	return 0;
}
