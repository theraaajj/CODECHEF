#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0; i<t; i++)
	{
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    int w= a+c;
	    int x= a+d;
	    int y= b+c;
	    int z= b+d;
	    if (w>x && w>y && w>z)
	    cout<<w<<"\n";
	    else if (x>y && x>z)
	    cout<<x<<"\n";
	    else if(y>z)
	    cout<<y<<"\n";
	    else
	    cout<<z<<"\n";
	}
	return 0;
}
