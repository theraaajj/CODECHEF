#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0; i<t; i++)
	{
	    int x,y,z;
	    cin>>x>>y>>z;
	    int a=(x*5)+(y*10);
	    int n= a/z;
	    cout<<n<<"\n";
	}  
	return 0;
}
