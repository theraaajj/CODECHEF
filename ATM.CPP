#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int w;
    float t;
  	scanf("%d%f",&w,&t);
   	if(w+0.5>t)
   	{
   		printf("%0.2f",t);		
   	}
   	else if(w%5!=0)
   	    printf("%0.2f",t);
   	else
  	    printf("%0.2f",t-w-0.5);    
  
    return 0 ;
}
