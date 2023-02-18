#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	for (int i=0; i<t; i++)
	{
	    int p,q;
	    cin>>p>>q;
	    int points = p+q;
	    if((points +1)%4==0 || (points +2)%4==0)
	    cout<<"bob"<<endl;
	    else
	    cout<<"alice"<<endl;
	}
	return 0;
}
