#include <iostream>
using namespace std;

int main()
{
	
	int t;
	cin >> t;
	
	for (int i=0; i<t; i++)
	{
	    int a;
	    cin>>a;
	    int count=0;
	    while (a!=0)
	    {
	        int x= a%10;
	        if (x==4)
	        count++;
	        a=a/10;
	    }
	    cout<<count<<"\n";
	}
	return 0;
}
