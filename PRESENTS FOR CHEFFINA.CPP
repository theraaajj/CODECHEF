#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for (int i=0; i<t; i++)
	{
	    int n;
	    cin>>n;
	    if(n>=5)
	    cout<<(n-(n/5))<<"\n";
	    else
	    cout<<n<<"\n";
	    
	}
	return 0;
}
