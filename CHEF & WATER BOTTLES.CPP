#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n,x,k;
        cin>>n>>x>>k;
        int ans=k/x;
        if(ans>n)
        cout<<n<<"\n";
        else
        cout<<ans<<"\n";
    }
	return 0;
}
