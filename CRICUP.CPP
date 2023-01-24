#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int x,y,d;
        cin>>x>>y>>d;
        if(x>y)
        {
            int diff=x-y;
            if (diff<=d)
            cout<<"YES"<<"\n";
            else
            cout<<"NO"<<"\n";
        }
        else if(y>x)
        {
            int diff=y-x;
            if (diff<=d)
            cout<<"YES"<<"\n";
            else
            cout<<"NO"<<"\n";
        }
        else if(x==y)
        {
            if(d==0)
            cout<<"YES"<<"\n";
            else
            cout<<"NO"<<"\n";
        }
        
    }
	return 0;
}
