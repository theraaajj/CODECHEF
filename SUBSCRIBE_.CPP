#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0; i<t; i++)
	{
	    int n, x;
	    cin>>n>>x;
	    int a;
	    
	    if(n%6==0)
	    a = (n/6);
	    else
	    a = (n/6)+1 ;
	    
	    cout<< x*a <<"\n";
	}
	return 0;
}
