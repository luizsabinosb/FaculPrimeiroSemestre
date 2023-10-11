#include <iostream>

using namespace std;

int main()
{
	int n,t,ano;
	
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
		cin>>t;
		
		if(2015-t<=0)
		{
			ano=(2015-t-1)*-1;
			cout<<ano<<" A.C.\n";
		}
		else
		{
			ano=2015-t;
			cout<<ano<<" D.C.\n";
		}
	}
}
