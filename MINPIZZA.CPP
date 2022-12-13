#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0; i<t; i++)
	{
	    int n,x;
	    cin>>n>>x;
	    int a=n*x;
	    if(a%4==0)
	    cout<<a/4<<endl;
	    else
	    cout<<(a/4)+1<<endl;
	}
	return 0;
}
