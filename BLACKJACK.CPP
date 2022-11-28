#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0; i<t; i++)
	{
	    int a,b;
	    cin>>a>>b;
	    int x=a+b;
	    int y=21-x;
	    if (y>=1 && y<=10)
	    cout<<y<<"\n";
	    else
	    cout<<-1<<"\n";
	}
	return 0;
}
