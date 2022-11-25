#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for (int i=0; i<t; i++)
    {
        int x;
        cin>>x;
        string ans= "normal";
        for (int j=1; j<=x; j++)
        {
            if(ans=="normal")
            ans="huge";
            else if(ans=="huge")
            ans="small";
            else if(ans=="small")
            ans="normal";
        }
        cout<<ans<<"\n";
    }
	return 0;
}
