#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    
    for(int i=0; i<t; i++)
    {
        int a;
        cin>>a;
        
        int l;
        int rev=0;
        while(a!=0)
        {
            l= a%10;
            rev=(rev*10)+l;
            a=a/10;
        }
        cout<<rev<<"\n";
    }
    return 0;
}
