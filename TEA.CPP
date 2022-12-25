#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0; i<t; i++)
	{
	    int x, y, z;
	    cin>>x>>y>>z;
	    
	    if(x<y || x==y)
	    cout<<z<<endl;
	    
	    else
	    {
	        if(x%y==0)
	        cout<<(x/y)*z<<endl;
	        else
	        cout<<((x/y)+1)*z<<endl;
	    }
	}
	return 0;
}
