#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        float a,x,b,y;
        cin>>a>>x>>b>>y;
        float a1= a/x;
        float a2= b/y;
        if(a1==a2)
        cout<<"equal"<<"\n";
        else if(a1>a2)
        cout<<"alice"<<"\n";
        else if(a2>a1)
        cout<<"bob"<<"\n";
    }
	return 0;
}
