#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	
	for(int i=0; i<t; i++)
	{
	    int a,b;
	    cin>>a>>b;
	    int c = a+b;
	    int count=0;
	    for (int j=1; j<=c; j++)
	    {
	        if (c%j==0)
	        count++;
	    }
	    if (count==2)
	    cout<<"Alice"<<"\n";
	    else
	    cout<<"Bob"<<"\n";
	}
	return 0;
}
