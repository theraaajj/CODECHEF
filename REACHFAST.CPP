#include <iostream>
using namespace std;

int main() { 
    int t; 
    cin>>t;
    
    for (int i=0; i<t; i++)
    { 
        int x, y, k; 
        cin>>x>>y>>k;
        int a;
        
        if (x>y)
        a = x-y;
        else 
        a = y-x;
        
        if (a%k == 0) 
        cout << a/k << endl;
        
        else 
        cout << (a/k)+1 << endl; 
    }
        
		return 0;
}
