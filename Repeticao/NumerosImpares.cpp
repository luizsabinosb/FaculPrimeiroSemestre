#include <iostream>

using namespace std;

int main()
{
	int x;
	
	cin>>x;
	if(x%2==0)
	{
		x=x-1;
	}
		for(int i=1; i<=x ; i+=2)
		{
			cout<<i<<endl;	
		}
}
