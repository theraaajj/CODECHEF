#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0; i<t; i++)
	{
	    int a, b;
	    float c;
	    cin>>a>>b;
	    cin>>c;
	    float avg = (a+b)/2.0;
	    
	   if(avg > c)
	   cout<<"YES"<<endl;
	   else
	   cout<<"NO"<<endl;
	}
	return 0;
}
