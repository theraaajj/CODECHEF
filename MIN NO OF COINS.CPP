#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	for(int i=0; i<t; i++)
	{
	    int x;
	    cin>>x;
	    int count=0;
	    if(x%5==0 && x%10==0)
	    cout<< (x/10) <<"\n";
	    else if(x%5==0 && x%10!=0)
	    cout<< (x/10)+1 <<"\n";
	    else
	    cout<<-1<<"\n";
	}

}
