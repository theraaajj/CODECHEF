#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
     int a, b;
     cin>>a>>b;
     int x;
     for(int j=1; j<=a; j++)
     {
         if (a%j==0 && b%j==0)
         x=j;
         else
         continue;
     }
     cout<<x<<" ";
     
     int y;
     if(a<b)
     {
         for(int j=1; j<=b; j++)
         {
             y= a*j;
             if (y%a==0 && y%b==0)
             break;
         }
         cout<<y<<"\n";
     }
     else if(b<a)
     {
         for(int j=1; j<=a; j++)
         {
             y= b*j;
             if (y%a==0 && y%b==0)
             break;
         }
         cout<<y<<"\n";
     }
    }
	return 0;
}
