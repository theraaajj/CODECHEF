#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0; i<t; i++)
	{
	    int n, x, p;
	    cin>>n>>x>>p;
	    int a= (3*x)-(n-x);
	    if(a>=p)
	    cout<<"PASS"<<"\n";
	    else
	    cout<<"FAIL"<<"\n";
	 }
	return 0;
}
