#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	for ( int i = 0; i<t; i++)
	{
	    
	    int x, y, m;
	    cin >> x >> y >> m;
	    if ( (x*m)<y )
	    cout << "YES" << endl;
	    else
	    cout << "NO" << endl;
	    
	}
	return 0;
}
