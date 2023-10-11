#include <iostream>
#include <math.h>
 using namespace std;
 
 int main()
 {
	int a,b,c,constru,x,t;
	
	while(cin>>a>>b>>c)
	{
		if(a==0)
		{
			break;
		}
		else
		{
			constru=a*b;
			x=(100*constru)/c;
			t=sqrt(x);
			cout<<t<<endl;
		}
	}
 }
