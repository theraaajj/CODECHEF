#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int c1=0;
	int c2=0;
	for(int i=0; i<n; i++)
	{
	    int a;
	    cin>>a;
	    if(a%2==0)
	    c1++;
	    else
	    c2++;
	}
	if (c1>c2)
	cout<<"READY FOR BATTLE"<<endl;
	else
	cout<<"NOT READY"<<endl;
	
	return 0;
}
