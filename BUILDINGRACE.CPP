#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0; i<t; i++)
	{
	    float a,b,x,y;
	    cin>>a>>b>>x>>y;
	    float t1=a/x;
	    float t2=b/y;
	    
	    if(t1>t2)
	    cout<<"Chefina"<<"\n";
	    else if(t2>t1)
	    cout<<"Chef"<<"\n";
	    else
	    cout<<"Both"<<"\n";
	}
	return 0;
}
