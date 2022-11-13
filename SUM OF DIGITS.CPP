#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int a;
        cin>>a;
        int sum=0;
        
        while(a!=0)
        {
            int r=a%10;
            sum=sum+ r;
            a=a/10;
        }
        cout<<sum<<"\n";
    }
    return 0;
}
