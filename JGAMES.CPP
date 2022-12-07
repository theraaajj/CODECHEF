#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0; i<t; i++)
	{
	    int x, y;
	    cin>>x>>y;
	    if((x+y)%2==0)
	    cout<<"Janmansh"<<"\n";
	    else
	    cout<<"Jay"<<"\n";
	}
	return 0;
}
