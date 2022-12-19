#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0; i<t; i++)
    {
        int a, b, x, y;
        cin>>a>>b>>x>>y;
        int r = a*b;
        int s = x*y;
        if(r>s)
        cout<<"No"<<endl;
        else
        cout<<"Yes"<<endl;
    }
	return 0;
}
