#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	int a;
	
	for (int i=0; i<t; i++)
	{
	    int n;
	    cin>>n;
	    a= n/10;
	    if(n%10==0)
	    cout<<a<<"\n";
	    else if(n%10!=0)
	    cout<<(a+1)<<"\n";
	}
	return 0;
}
