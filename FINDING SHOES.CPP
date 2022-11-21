#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t; i++)
	{
	    int n,m;
	    cin>>n>>m;
	    int a= (m+ (2*(n-m)));
	    if(n>m)
	    cout<<a<<"\n";
	    else if(n<m)
	    cout<<n<<"\n";
	    else if (n==m)
	    cout<<n<<"\n";
	}
	return 0;
}
