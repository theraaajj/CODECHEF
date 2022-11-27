#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0; i<t;i++)
	{
	    int n,m;
	    cin>>n>>m;
	    int a=n/m;
	    if(n%m==0)
	    {
	    if(a%2==0)
	    cout<<"Yes"<<endl;
	    else
	    cout<<"No"<<endl;
	    }
	    else
	    cout<<"No"<<endl;
	}
	return 0;
}
