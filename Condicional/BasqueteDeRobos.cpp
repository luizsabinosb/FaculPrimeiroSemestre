#include <iostream>

using namespace std;

int main()
{
	int x;
	
	cin>>x;
	
	if(x>=0 && x<=800)
	{
		cout<<"1\n";
	}
	if(x>800 && x<= 1400)
	{
		cout<<"2\n";
	}
	if(x>1400 && x<= 2000)
	{
		cout<<"3\n";
	}
}
