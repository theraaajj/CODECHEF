#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0; i<t; i++)
	{
	    int a, b, c;
	    cin>>a>>b>>c;
	    int avg1 = (a+b)/2;
	    int avg2 = (c+b)/2;
	    int avg3 = (a+c)/2;

	    
	    if(avg1<35 || avg2<35 || avg3<35){
            cout<<"Fail"<<endl;
        }
        else{
            cout<<"Pass"<<endl;
        }
	    
	}
	return 0;
}
