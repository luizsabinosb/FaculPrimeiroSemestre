#include <iostream>
using namespace std;

int main()
{
	int m,n,fatm,fatn;
	
	while(cin>>m>>n)
	{
		fatm=0,fatn=0;
		
		for(fatm=1,fatn=1;m>=0,n>=0;m--,n--)
		{
			fatm*=m;
			fatn*=n;
		}
		cout<<fatm<<endl;
		cout<<fatn<<endl;
		cout<<fatm+fatn<<endl;
	}
}
