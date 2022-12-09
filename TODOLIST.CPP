#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int i=0; i<t; i++)
	{
	    int n;
	    cin>>n;
	    int count=0;
	    for(int j=0; j<n; j++)
	    {
	        int d;
	        cin>>d;
	        if(d<1000)
	        count++;
	        else
	        continue;
	    }
	    cout<<n-count<<endl;
	}
	
	return 0;
}
