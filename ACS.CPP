#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int p;
        cin>>p;
        int a=p/100;
        int b=p%100;
        if(b<=10)
        cout<< (a+b) <<endl;
        else 
        cout<<-1<<endl;
        
    }
	return 0;
}
