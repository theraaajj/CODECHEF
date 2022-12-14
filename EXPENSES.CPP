#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0; i<t; i++)
	{
	    
	    int n, x;
	    cin >>n >>x;
	    float earn = pow (2,x);
	    
	    for(int j=1; j<=n; j++)
	    {
	        
	       earn = earn - (0.5 * earn);
	        
	    }
	   
	    cout << earn << endl;
	}
	return 0;
}
