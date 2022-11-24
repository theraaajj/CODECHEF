#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for (int i=-0; i<t; i++)
	{
	    int r1, r2, r3;
	    cin>>r1>>r2>>r3;
	    if(r1> (r2+r3) || r2> (r1+r3) || r3> (r1+r2))
	    cout<< "Yes" << "\n";
	    else
	    cout<< "No" << "\n";
	    
	}
	return 0;
}
