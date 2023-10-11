#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int a,b,c,r;
	
	for(int i=1;i<=10000;i++)
	{
		cin>>a>>b>>c;
		if(a==0)
		{
			break;
		}
		else
		{
		r=(1-(c/100))*10;
		cout<<r;
		}
	}	
}
