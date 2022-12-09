#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int i=0; i<t; i++)
	{
	    int a,c;
	    cin>>a>>c;
	    int b=c-((c-a)/2);
	    if ((c-a)%2==0)
	    cout<<b<<endl;
	    else
	    cout<<-1<<endl;
	}
	return 0;
}
