#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	for(int i=0; i<t; i++)
	{
	    int n,k,m;
	    cin>>n>>k>>m;
	    int a=m*k;
	    int b=n/a;
	    if(n%a==0)
	    cout<<b<<"\n";
	    else
	    cout<<b+1<<"\n";
	    
	}
	return 0;
}
