#include <iostream>

using namespace std;

int main()
{
	int x,y,n=1;
	
	cin>>x>>y;
	
	for(int i=1;i<=y;i++)
	{
		if(n==x)
		{
			cout<<i<<endl;
			n=1;
		}
		else
		{
			cout<<i<<" ";
			n++;
		}
	}
}
