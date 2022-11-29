#include <iostream>
using namespace std;

int main() {
	int t;
    cin>>t;
     for(int i=0; i<t; i++)
     {
        int a,b,x,y;
        cin>>a>>b>>x>>y;
        if (a>b)
        {
            int m=a-b;
            if(m<=y)
            cout<<"yes"<<"\n";
            else
            cout<<"no"<<"\n";
        }
        
        else if(a<b)
        {
            int m=b-a;
            if(m<=x)
            cout<<"yes"<<"\n";
            else
            cout<<"no"<<"\n";
        }
        else if(a==b)
        cout<<"yes"<<"\n";
     }
	return 0;
}
