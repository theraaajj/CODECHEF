#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for (int i=0 ; i<t; i++)
	{
	    int x, y, p, q;
	    cin>>x>>y>>p>>q;
	    
	    int chef = x + (10*p);
	    int chefina = y + (10*q);
	    
	    if (chef < chefina)
	    cout<< "Chef" << endl;
	    
	    else if (chefina < chef)
	    cout << "Chefina" << endl;
	    
	    else
	    cout << "Draw" << endl;
	}
	return 0;
}
