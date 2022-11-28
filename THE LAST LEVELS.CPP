#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0; i<t; i++)
	{
	    int x, y, z;
	    cin>>x>>y>>z;
	    
	    if(x>3)
	     {
	       if(x%3==0) 
	         cout<< (((x/3)-1)*z + (x*y)) <<"\n";
	       else
	         cout<< ((x/3)*z + (x*y)) <<"\n";
	     }
	    else
	    cout<< x*y <<"\n";
	}
	return 0;
}
