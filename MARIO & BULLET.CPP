#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0; i<t; i++)
	{
	    int x,y,z;
	    cin>>x>>y>>z;
	    int a=z-(y/x);
	    if(a<0)
	    cout<<0<<"\n";
	    else
	    cout<< a << "\n";
	    
	}
	return 0;
}
